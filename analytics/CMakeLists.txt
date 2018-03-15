project(analytics)

set(CMAKE_CXX_STANDARD 11)

if (UNIX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

# Analytics:
#   core, core analytics.
#   interface, pythong interface.
add_subdirectory(core)
add_subdirectory(interface)
