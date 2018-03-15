project(analytics-core)

set(SOURCES src/core.cpp)
set(HEADERS src/core.h)


add_library(${PROJECT_NAME} ${SOURCES})

set_target_properties(analytics-core PROPERTIES PUBLIC_HEADER "src/core.h")

install (   TARGETS ${PROJECT_NAME}
            ARCHIVE DESTINATION lib
            LIBRARY DESTINATION lib
            PUBLIC_HEADER DESTINATION include
            RUNTIME DESTINATION bin)