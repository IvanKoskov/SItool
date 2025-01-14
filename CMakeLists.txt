cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(SItool)
find_package(Curses REQUIRED)

set(SOURCES
    src/main.c
    src/config.c
    src/commandsOptions.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARIES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CURSES_INCLUDE_DIRS})

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION /usr/local/bin
)








#cmake_minimum_required(VERSION 3.10)
#project(SItool)

# Find the Curses package
#find_package(Curses REQUIRED)

# Set C++ standard
#set(CMAKE_CXX_STANDARD 17)

# Include the directory for headers
#include_directories(include)

# Add the executable with source files
#add_executable(SItool src/main.c src/commandsOptions.c src/config.c)

# Link the Curses library
#target_link_libraries(SItool PRIVATE ${CURSES_LIBRARIES})

# Install the executable to /usr/local/bin
#install(TARGETS SItool DESTINATION /usr/local/bin)

# Install header files to /usr/local/include
#install(DIRECTORY include/ DESTINATION /usr/local/include)
