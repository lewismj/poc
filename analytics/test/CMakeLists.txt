project(analytics-test)

find_package(Boost 1.54 REQUIRED COMPONENTS unit_test_framework)


add_executable(${PROJECT_NAME} src/core_test.cpp)


target_include_directories(${PROJECT_NAME} PRIVATE
        ${Boost_INCLUDE_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}
        "../core/src"
        )

target_link_libraries(
        ${PROJECT_NAME}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        analytics-core
)

target_compile_definitions(${PROJECT_NAME} PRIVATE BOOST_TEST_DYN_LINK)

# Add in each test:
# User Boost Test, specify -t as we define multiple tests.
add_test(sum_test_1 ${PROJECT_NAME} -t */sum_test_1)
add_test(sum_test_2 ${PROJECT_NAME} -t */sum_test_2)