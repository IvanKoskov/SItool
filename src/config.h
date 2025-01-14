#ifndef CONFIG_H
#define CONFIG_H

// Project metadata
#define PROJECT_NAME "SItool"
#define VERSION "1.0.0" // alpha
#define AUTHOR "Ivan Koskov"
#define MAINTAINER "In development stage"
#define LICENSE "MIT License"
#define PLATFORM "Unix based (Windows partial support)"
#define ABOUT "Scientific tool for operations and calculations"
#define STRINGIFY(x) #x

// Versioning
#define VERSION_MAJOR 1
#define VERSION_MINOR 0
#define VERSION_PATCH 0

#define BUILD_TYPE "BETA"
#define COMPILER "GCC"
#define COMPILED_ON "MACOS"

void displayConfig(void);

#endif
