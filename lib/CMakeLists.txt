cmake_minimum_required(VERSION 3.4)
project(Lib)

set(SOURCE_FILES
        src/Client.cpp
        src/Vip.cpp
        src/NonVip.cpp
        src/ClientType.cpp
        src/Reservation.cpp
        src/Machine.cpp
        src/Repository.cpp
        src/ReservationsRepository.cpp
        src/MachinesRepository.cpp
        src/ClientsRepository.cpp
        src/Exception.cpp
        src/ReservationsManager.cpp)


add_library(Lib ${SOURCE_FILES})

target_include_directories(Lib PUBLIC include)

enable_testing()

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
 ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES
 test/master.cpp
 test/ClientTest.cpp)

add_executable (TestLib ${SOURCE_TEST_FILES})


target_link_libraries (TestLib
 Lib
 ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
 )


add_test(TestAll TestLib
 --report_level=detailed
 --log_level=all
 --color_output=yes
 )

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

