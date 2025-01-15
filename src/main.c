#include "commandsOptions.h"

int main(int argc, char *argv[]) {
        if (argc != 5) {
        printf("Usage: %s <arg1> <arg2> <arg3>\n", argv[0]);
        printf("Use arguments to pass commands\n");
        printf("arguments will be parsed\n");
        printf("Please follow the pattern of statements and commands\n");
        printf("you must have 3 arguments to pass!\n");
        return 1;
    } 
    
    if (argc > 1 && strcmp(argv[1], "HELP") == 0) { //help
        helpCommand();
    } else if (argc > 1 && strcmp(argv[1], "unit") == 0) { //function to convert units
        unitCommand(argc, argv);
    } else if (argc > 1 && strcmp(argv[1], "control") == 0) { //version + info
        displayConfig();
    } else if (argc > 1 && strcmp(argv[1], "UNITS") == 0) { //all available units
        showUnits();
    } 
    
     else {
        printf("Unknown command. Use: unit <value> <from_unit> <to_unit> or similar arguments\n"); //if no corresponding
        return 1;
    } 


}

