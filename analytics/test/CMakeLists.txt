project(analytics-test)

find_package(Boost 1.64 REQUIRED COMPONENTS unit_test_framework)


add_executable(${PROJECT_NAME} src/core_test.cpp)


target_include_directories(${PROJECT_NAME} PRIVATE
        ${Boost_INCLUDE_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(
        ${PROJECT_NAME}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

target_compile_definitions(${PROJECT_NAME} PRIVATE BOOST_TEST_DYN_LINK)


add_test(TEST analytics-test ${PROJECT_NAME})