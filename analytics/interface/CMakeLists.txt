project(analytics-interface)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_PATH})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# We could/should have separate repo for each and build against installed versions.
# In this example, I'm using a shared repo.
include_directories(../core/src)

set_property(SOURCE analytics.i PROPERTY CPLUSPLUS ON)
swig_add_library(${PROJECT_NAME} LANGUAGE python SOURCES analytics.i)
swig_link_libraries(${PROJECT_NAME} analytics-core ${PYTHON_LIBRARIES})

