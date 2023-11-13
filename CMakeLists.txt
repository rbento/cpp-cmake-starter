cmake_minimum_required (VERSION 3.27)

project ("project_name")

set(CXX_STANDARD 98) # Supported values are 98, 11, 14, 17, 20, 23, 26
set(CXX_STANDARD_REQUIRED ON)
set(CXX_EXTENSIONS OFF)

set(ENTRY_POINT src/main.cpp)

add_executable(${PROJECT_NAME} ${ENTRY_POINT})

target_include_directories(${PROJECT_NAME} PRIVATE ${INTERNAL_INCLUDES})

