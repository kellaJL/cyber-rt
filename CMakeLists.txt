
#======================= START OF LICENSE NOTICE =======================
#  Copyright (C) 2022  All Rights Reserved

#  NO WARRANTY. THE PRODUCT IS PROVIDED BY DEVELOPER "AS IS" AND ANY
#  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
#  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL DEVELOPER BE LIABLE FOR
#  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
#  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
#  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
#  IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
#  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THE PRODUCT, EVEN
#  IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#======================== END OF LICENSE NOTICE ========================
#  Primary Author: Martin.J


cmake_minimum_required(VERSION 3.5)

set(CMAKE_ASM_CREATE_SHARED_LIBRARY "ld <CMAKE_SHARED_LIBRARY_CREATE_ASM_FLAGS>
<CMAKE_SHARED_LIBRARY_SONAME_ASM_FLAG><TARGET_SONAME> <LINK_FLAGS> -o <TARGET> <OBJECTS> <LINK_LIBRARIES>")

project(cyber VERSION 1.1.0 LANGUAGES C CXX ASM)
set(CMAKE_CXX_STANDARD 14)
set(TARGET_NAME ${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -Wall -D_GLIBCXX_USE_NANOSLEEP -DLINUX ")

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/local_depend/include
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/local_depend/lib
)

file(GLOB CYBER_HEADERS 
    "cyber/base/*.h"
    "cyber/common/*.h"
    "cyber/croutine/*.h"
    "cyber/croutine/detail/*.h"
    "cyber/scheduler/*.h"
    "cyber/scheduler/common/*.h"
    "cyber/scheduler/policy/*.h"
    "cyber/time/*.h"
    "cyber/timer/*.h"
    "cyber/task/*.h"
    "cyber/data/*.h"
    "cyber/data/fusion/*.h"
    "cyber/event/*.h"
    "cyber/proto/*.pb.h"
    "cyber/*.h"
    "cyber/sysmo/*.h"
    )

file(GLOB CYBER_SRCS 
    "cyber/base/*.cc"
    "cyber/common/*.cc"
    "cyber/croutine/*.cc"
    "cyber/croutine/detail/*.cc"
    "cyber/scheduler/*.cc"
    "cyber/scheduler/common/*.cc"
    "cyber/scheduler/policy/*.cc"
    "cyber/time/*.cc"
    "cyber/timer/*.cc"
    "cyber/task/*.cc"
    "cyber/data/*.cc"
    "cyber/data/fusion/*.cc"
    "cyber/event/*.cc"
    "cyber/proto/*.pb.cc"
    "cyber/*.cc"
    "cyber/sysmo/*.cc"
  )


if(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64")
   message(STATUS " processor architecture is aarch64")
   LIST(APPEND CYBER_SRCS "cyber/croutine/detail/swap_aarch64.S")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
   message(STATUS " processor architecture is x86_64")
   LIST(APPEND CYBER_SRCS "cyber/croutine/detail/swap_x86_64.S")
else()
      message(STATUS " processor architecture is unknown")
endif()


list(FILTER CYBER_SRCS EXCLUDE REGEX .*test[.]cc)

add_library(${TARGET_NAME} SHARED
    ${CYBER_HEADERS} 
    ${CYBER_SRCS}
)
target_link_libraries(${TARGET_NAME}
    libatomic.a
    libprotobuf.a
)



# install 
set(ABS_PATH <your-target-path>)

install(DIRECTORY cyber/
    DESTINATION ${ABS_PATH}/include/cyber
    FILES_MATCHING
    PATTERN "*.h"
)


install(TARGETS ${TARGET_NAME}
    EXPORT ${TARGET_NAME}-targets
    ARCHIVE DESTINATION ${ABS_PATH}/lib
    LIBRARY DESTINATION ${ABS_PATH}/lib
)







