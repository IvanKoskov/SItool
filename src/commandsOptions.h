#ifndef __COMMANDSOPTIONS_HPP__
#define __COMMANDSOPTIONS_HPP__
#include <stdio.h>
#include <string.h>
#include "config.h" 

#define RESET   "\033[0m"      // Reset color
#define BLACK   "\033[0;30m"   // Black
#define RED     "\033[0;31m"   // Red
#define GREEN   "\033[0;32m"   // Green
#define YELLOW  "\033[0;33m"   // Yellow
#define BLUE    "\033[0;34m"   // Blue
#define MAGENTA "\033[0;35m"   // Magenta
#define CYAN    "\033[0;36m"   // Cyan
#define WHITE   "\033[0;37m"   // White

// Bright Text Colors
#define BRIGHT_BLACK   "\033[1;30m"   // Bright Black
#define BRIGHT_RED     "\033[1;31m"   // Bright Red
#define BRIGHT_GREEN   "\033[1;32m"   // Bright Green
#define BRIGHT_YELLOW  "\033[1;33m"   // Bright Yellow
#define BRIGHT_BLUE    "\033[1;34m"   // Bright Blue
#define BRIGHT_MAGENTA "\033[1;35m"   // Bright Magenta
#define BRIGHT_CYAN    "\033[1;36m"   // Bright Cyan
#define BRIGHT_WHITE   "\033[1;37m"   // Bright White

// Background Colors (Standard)
#define BG_BLACK   "\033[40m"   // Black background
#define BG_RED     "\033[41m"   // Red background
#define BG_GREEN   "\033[42m"   // Green background
#define BG_YELLOW  "\033[43m"   // Yellow background
#define BG_BLUE    "\033[44m"   // Blue background
#define BG_MAGENTA "\033[45m"   // Magenta background
#define BG_CYAN    "\033[46m"   // Cyan background
#define BG_WHITE   "\033[47m"   // White background

// Bright Background Colors
#define BG_BRIGHT_BLACK   "\033[100m"   // Bright Black background
#define BG_BRIGHT_RED     "\033[101m"   // Bright Red background
#define BG_BRIGHT_GREEN   "\033[102m"   // Bright Green background
#define BG_BRIGHT_YELLOW  "\033[103m"   // Bright Yellow background
#define BG_BRIGHT_BLUE    "\033[104m"   // Bright Blue background
#define BG_BRIGHT_MAGENTA "\033[105m"   // Bright Magenta background
#define BG_BRIGHT_CYAN    "\033[106m"   // Bright Cyan background
#define BG_BRIGHT_WHITE   "\033[107m"   // Bright White background




typedef struct {
    const char *unit;
    double factor;
} Unit;


extern Unit unit_factors[];  // Declaration of the array







void unitCommand(int argc, char *argv[]);
void helpCommand(void);
double convert_units(double value, const char* from_unit, const char* to_unit); //universal unit converter 
void showUnits(void);
void displayUnits(const Unit unit_factors[], int size);

#endif // __COMMANDSOPTIONS_H__