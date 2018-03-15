cmake_minimum_required(VERSION 3.8)
project(poc)

add_subdirectory(analytics)

set_target_properties(analytics-core PROPERTIES PUBLIC_HEADER "library.h")


