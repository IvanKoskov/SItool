#include <ncurses.h>
#include <string.h>  // Include for strlen
#include "config.h"

void displayConfig(void) {
    // Initialize ncurses
    initscr();        // Start ncurses mode
    cbreak();         // Disable line buffering
    noecho();         // Prevent input from being displayed
    curs_set(1);      // Show the cursor for movement
    keypad(stdscr, TRUE); // Enable keypad input (for arrow keys)

    // Check if color is supported
    if (has_colors()) {
        start_color();  // Start color functionality
        // Define color pairs
        init_pair(1, COLOR_CYAN, COLOR_BLACK);  // Cyan text on black background
        init_pair(2, COLOR_YELLOW, COLOR_BLACK); // Yellow text on black background
        init_pair(3, COLOR_GREEN, COLOR_BLACK);  // Green text on black background
    }

    int height, width;
    getmaxyx(stdscr, height, width);  // Get the terminal size

    // List of lines to display
    const char* lines[] = {
        "Project: " PROJECT_NAME,
        "Version: " VERSION,
        "Author: " AUTHOR,
        "Maintainer: " MAINTAINER,
        "License: " LICENSE,
        "Platform: " PLATFORM,
        "About: " ABOUT,
        "Version: " STRINGIFY(VERSION_MAJOR) "." STRINGIFY(VERSION_MINOR) "." STRINGIFY(VERSION_PATCH),
        "Compiled with: " COMPILER,
        "Compiled on: " COMPILED_ON
    };
    int numLines = 10;  // Number of lines to display

    // Calculate where to start printing to center text vertically and horizontally
    int startY = height / 2 - numLines / 2;
    int startX = (width - strlen(lines[0])) / 2 - 5;  // Move text left by 5 characters

    int ch; // Variable to store key press

    // Display each line with coloring
    for (int i = 0; i < numLines; i++) {
        // Highlight the current line
        if (i == 0) {
            attron(COLOR_PAIR(1));  // Cyan color for the project name
        } else if (i == 1) {
            attron(COLOR_PAIR(2));  // Yellow color for the version
        } else if (i == 8) {
            attron(COLOR_PAIR(3));  // Green color for compiled with
        }

        mvprintw(startY + i, startX, "%s", lines[i]);  // Display each line
        attroff(COLOR_PAIR(1) | COLOR_PAIR(2) | COLOR_PAIR(3));  // Reset colors after each line
    }

    refresh();       // Refresh the screen to show the changes

    // Wait for user input, move the cursor with arrow keys, and quit with 'q'
    while ((ch = getch()) != 'q') {
        switch (ch) {
            case KEY_UP:
                if (startY > 0) {
                    startY--;
                }
                break;
            case KEY_DOWN:
                if (startY + numLines < height) {
                    startY++;
                }
                break;
            case KEY_LEFT:
                if (startX > 0) {
                    startX--;
                }
                break;
            case KEY_RIGHT:
                if (startX + strlen(lines[0]) < width) {
                    startX++;
                }
                break;
        }

        // Clear the screen and redraw the lines with updated position
        clear();
        for (int i = 0; i < numLines; i++) {
            mvprintw(startY + i, startX, "%s", lines[i]);
        }
        refresh();  // Refresh the screen to show the updated content
    }

    endwin();        // End ncurses mode
}
