cmake_minimum_required(VERSION 3.92)
project(poc)

# Analytics library:
add_subdirectory(analytics)
set_target_properties(analytics-core PROPERTIES PUBLIC_HEADER "library.h")


# Enable testing:
enable_testing()
add_subdirectory(analytics/test)
