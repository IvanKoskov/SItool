#include "commandsOptions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define _USE_MATH_DEFINES

#define INFO "\033[1;34m"  // Blue text color (ANSI escape code for blue)
#define RESET "\033[0m"   


// Function to display all units
void displayUnits(const Unit unit_factors[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s: %f\n", unit_factors[i].unit, unit_factors[i].factor);
    }
}


Unit unit_factors[] = {
    // Length (meters as base unit)
    {"m", 1.0},      // meters
    {"cm", 0.01},    // centimeters
    {"mm", 0.001},   // millimeters
    {"km", 1000.0},  // kilometers
    {"in", 0.0254},  // inches
    {"ft", 0.3048},  // feet
    {"yd", 0.9144},  // yards
    {"mile", 1609.34}, // miles
    {"nm", 1.852e-9}, // nautical miles
    {"ly", 9.4607e15}, // light years (meters)

    // Mass (kilograms as base unit)
    {"kg", 1.0},     // kilograms
    {"g", 0.001},    // grams
    {"mg", 1e-6},    // milligrams
    {"ug", 1e-9},    // micrograms
    {"lb", 0.453592},// pounds
    {"oz", 0.0283495}, // ounces
    {"st", 6.35029},  // stones (UK)
 
     {"mole", 1.0},            // Base unit for amount of substance
{"molecule", 1.0 / 6.022e23}, // Number of molecules per mole (inverse of Avogadro's number)



    
    // Volume (liters as base unit)
    {"l", 1.0},      // liters
    {"ml", 0.001},   // milliliters
    {"cl", 0.01},    // centiliters
    {"dl", 0.1},     // deciliters
    {"gal", 3.78541}, // gallons
    {"qt", 0.946353}, // quarts
    {"pt", 0.473176}, // pints
    {"oz_fl", 0.0295735}, // fluid ounces
    {"bbl", 158.987}, // barrels (liquid)

    // Temperature (Kelvin as base unit, Celsius and Fahrenheit are derived)
    {"K", 1.0},      // Kelvin (base)
    {"C", 1.0},      // Celsius (relative to K)
    {"F", 5.0/9.0},  // Fahrenheit (relative to C)
    {"R", 5.0/9.0},  // Rankine (relative to F)

    // Time (seconds as base unit)
    {"s", 1.0},      // seconds
    {"min", 60.0},   // minutes
    {"h", 3600.0},   // hours
    {"d", 86400.0},  // days
    {"wk", 604800.0}, // weeks
    {"mo", 2628000.0}, // months (average)
    {"yr", 31536000.0}, // years (365 days)

    // Energy (joules as base unit)
    {"J", 1.0},      // joules
    {"cal", 4.184},  // calories
    {"kcal", 4184.0}, // kilocalories
    {"eV", 1.60218e-19}, // electron volts
    {"Btu", 1055.06}, // British thermal unit
    {"Wh", 3600.0},  // watt-hours
    {"kWh", 3600000.0}, // kilowatt-hours

    // Pressure (pascals as base unit)
    {"Pa", 1.0},     // pascal
    {"atm", 101325.0}, // atmosphere
    {"bar", 100000.0}, // bar
    {"mmHg", 133.322}, // millimeters of mercury
    {"psi", 6894.76}, // pounds per square inch
    {"torr", 133.322}, // torr
    {"atm", 101325.0}, // atmosphere

    // Force (newton as base unit)
    {"N", 1.0},      // newton
    {"dyne", 1e-5},  // dyne
    {"lbf", 4.44822}, // pound-force
    {"kgf", 9.80665}, // kilogram-force
    {"gf", 0.00980665}, // gram-force

    // Electric Charge (coulombs as base unit)
    {"C", 1.0},      // coulomb
    {"mC", 0.001},   // millicoulomb
    {"uC", 1e-6},    // microcoulomb
    {"nC", 1e-9},    // nanocoulomb

    // Power (watts as base unit)
    {"W", 1.0},      // watt
    {"mW", 0.001},   // milliwatt
    {"kW", 1000.0},  // kilowatt
    {"hp", 745.7},   // horsepower
    {"BTU/h", 0.293071}, // British thermal unit per hour
    {"J/s", 1.0},    // joules per second

    // Speed (meters per second as base unit)
    {"m/s", 1.0},    // meters per second
    {"km/h", 0.277778}, // kilometers per hour
    {"mph", 0.44704},  // miles per hour
    {"knots", 0.514444}, // nautical miles per hour

    // Acceleration (meters per second squared as base unit)
    {"m/s^2", 1.0},  // meters per second squared
    {"g", 9.80665},  // gravitational acceleration (m/s^2)

    // Angle (radians as base unit)
    {"rad", 1.0},    // radians
    {"deg", 0.0174533}, // degrees (π/180)

    // Frequency (hertz as base unit)
    {"Hz", 1.0},     // hertz
    {"kHz", 1000.0}, // kilohertz
    {"MHz", 1e6},    // megahertz
    {"GHz", 1e9},    // gigahertz

    // Electric Current (amperes as base unit)
    {"A", 1.0},      // amperes
    {"mA", 0.001},   // milliamperes
    {"uA", 1e-6},    // microamperes

    // Conductance (siemens as base unit)
    {"S", 1.0},      // siemens
    {"mS", 0.001},   // millisiemens
    {"uS", 1e-6},    // microsiemens

      {"m", 1.0},        // meters
    {"cm", 0.01},      // centimeters
    {"mm", 0.001},     // millimeters
    {"km", 1000.0},    // kilometers
    {"in", 0.0254},    // inches
    {"ft", 0.3048},    // feet
    {"yd", 0.9144},    // yards
    {"mile", 1609.34}, // miles
    {"nm", 1.852e-9},  // nautical miles
    {"ly", 9.4607e15}, // light years

    // Mass (kilograms as base unit)
    {"kg", 1.0},       // kilograms
    {"g", 0.001},      // grams
    {"mg", 1e-6},      // milligrams
    {"ug", 1e-9},      // micrograms
    {"lb", 0.453592},  // pounds
    {"oz", 0.0283495}, // ounces
    {"st", 6.35029},   // stones

    // Volume (liters as base unit)
    {"l", 1.0},        // liters
    {"ml", 0.001},     // milliliters
    {"cl", 0.01},      // centiliters
    {"dl", 0.1},       // deciliters
    {"gal", 3.78541},  // gallons
    {"qt", 0.946353},  // quarts
    {"pt", 0.473176},  // pints
    {"oz_fl", 0.0295735}, // fluid ounces
    {"bbl", 158.987},  // barrels

    // Temperature (Kelvin as base unit)
    {"K", 1.0},        // Kelvin (base)
    {"C", 1.0},        // Celsius (relative to K)
    {"F", 5.0/9.0},    // Fahrenheit (relative to C)
    {"R", 5.0/9.0},    // Rankine (relative to K)

    // Time (seconds as base unit)
    {"s", 1.0},        // seconds
    {"min", 60.0},     // minutes
    {"h", 3600.0},     // hours
    {"d", 86400.0},    // days
    {"wk", 604800.0},  // weeks
    {"mo", 2628000.0}, // months (approx)
    {"yr", 31536000.0},// years (approx)

    // Energy (joules as base unit)
    {"J", 1.0},        // joules
    {"cal", 4.184},    // calories
    {"kcal", 4184.0},  // kilocalories
    {"eV", 1.60218e-19}, // electron volts
    {"Btu", 1055.06},  // British thermal units
    {"Wh", 3600.0},    // watt-hours
    {"kWh", 3600000.0}, // kilowatt-hours

    // Pressure (pascals as base unit)
    {"Pa", 1.0},       // pascal
    {"atm", 101325.0}, // atmosphere
    {"bar", 100000.0}, // bar
    {"mmHg", 133.322}, // millimeters of mercury
    {"psi", 6894.76},  // pounds per square inch
    {"torr", 133.322}, // torr

    // Force (newton as base unit)
    {"N", 1.0},        // newton
    {"dyne", 1e-5},    // dyne
    {"lbf", 4.44822},  // pound-force
    {"kgf", 9.80665},  // kilogram-force
    {"gf", 0.00980665},// gram-force

    // Electric Charge (coulombs as base unit)
    {"C", 1.0},        // coulomb
    {"mC", 0.001},     // millicoulomb
    {"uC", 1e-6},      // microcoulomb
    {"nC", 1e-9},      // nanocoulomb

    // Power (watts as base unit)
    {"W", 1.0},        // watt
    {"mW", 0.001},     // milliwatt
    {"kW", 1000.0},    // kilowatt
    {"hp", 745.7},     // horsepower
    {"BTU/h", 0.293071}, // British thermal units per hour

    // Speed (meters per second as base unit)
    {"m/s", 1.0},      // meters per second
    {"km/h", 0.277778}, // kilometers per hour
    {"mph", 0.44704},   // miles per hour
    {"knots", 0.514444},// knots

    // Acceleration (meters per second squared as base unit)
    {"m/s^2", 1.0},    // meters per second squared
    {"g", 9.80665},    // gravitational acceleration (m/s^2)

    // Angle (radians as base unit)
    {"deg", 0.0174533}, // degrees to radians
    {"rad", 1.0},       // radians
    {"rev", 6.28319},   // revolutions

    // Frequency (hertz as base unit)
    {"Hz", 1.0},        // hertz
    {"kHz", 1000.0},    // kilohertz
    {"MHz", 1e6},       // megahertz
    {"GHz", 1e9},       // gigahertz

    // Electric Current (amperes as base unit)
    {"A", 1.0},         // amperes
    {"mA", 0.001},      // milliamperes
    {"uA", 1e-6},       // microamperes

    // Conductance (siemens as base unit)
    {"S", 1.0},         // siemens
    {"mS", 0.001},      // millisiemens
    {"uS", 1e-6},       // microsiemens

    // Digital Storage (bytes as base unit)
    {"B", 1.0},         // byte
    {"KB", 1024.0},     // kilobyte
    {"MB", 1024.0 * 1024.0}, // megabyte
    {"GB", 1024.0 * 1024.0 * 1024.0}, // gigabyte
    {"TB", 1024.0 * 1024.0 * 1024.0 * 1024.0}, // terabyte
    {"PB", 1024.0 * 1024.0 * 1024.0 * 1024.0 * 1024.0}, // petabyte

    // Energy (electron volts as base unit)
    {"eV", 1.60218e-19}, // electron volts
    {"J", 1.0},          // joules
    {"cal", 4.184},      // calories
    {"kcal", 4184.0},    // kilocalories
    {"Btu", 1055.06},    // British thermal unit
    {"Wh", 3600.0},      // watt-hours
    {"kWh", 3600000.0},  // kilowatt-hours

    // Speed (meters per second as base unit)
    {"m/s", 1.0},        // meters per second
    {"km/h", 0.277778},  // kilometers per hour
    {"mph", 0.44704},    // miles per hour
    {"knots", 0.514444}, // nautical miles per hour
    {"fps", 0.3048},     // feet per second

    // Angle (radians as base unit)
    {"rad", 1.0},        // radians
    {"deg", 0.0174533},  // degrees (π/180)
    {"arcmin", 1.0 / 60.0}, // arcminutes
    {"arcsec", 1.0 / 3600.0}, // arcseconds

    // Pressure (pascals as base unit)
    {"Pa", 1.0},         // pascal
    {"atm", 101325.0},   // atmosphere
    {"bar", 100000.0},   // bar
    {"mmHg", 133.322},   // millimeters of mercury
    {"psi", 6894.76},    // pounds per square inch
    {"torr", 133.322},   // torr

    // Frequency (hertz as base unit)
    {"Hz", 1.0},         // hertz
    {"kHz", 1000.0},     // kilohertz
    {"MHz", 1e6},        // megahertz
    {"GHz", 1e9},        // gigahertz
    {"THz", 1e12},       // terahertz

    // Electric Current (amperes as base unit)
    {"A", 1.0},          // amperes
    {"mA", 0.001},       // milliamperes
    {"uA", 1e-6},        // microamperes

    // Volume (liters as base unit)
   // {"l", 1.0},          // liters
   // {"ml", 0.001},       // milliliters
   // {"cl", 0.01},        // centiliters
   // {"dl", 0.1},         // deciliters
   // {"gal", 3.78541},    // gallons
   // {"qt", 0.946353},    // quarts
   // {"pt", 0.473176},    // pints
   // {"oz_fl", 0.0295735},// fluid ounces
   // {"bbl", 158.987},    // barrels (liquid)

    // Electric Potential (volts as base unit)
    {"V", 1.0},          // volt
    {"mV", 0.001},       // millivolt
    {"kV", 1000.0},      // kilovolt

    // Electric Resistance (ohms as base unit)
    {"Ohm", 1.0},        // ohm
    {"kOhm", 1000.0},    // kilohm
    {"MOhm", 1e6},       // megaohm

};


 int num_units = sizeof(unit_factors) / sizeof(unit_factors[0]);

void showUnits() {
displayUnits(unit_factors, num_units);

}



int unit_factors_find(const char* unit) {
    // Loop through the unit_factors array to find the unit
    for (int i = 0; i < sizeof(unit_factors) / sizeof(Unit); ++i) {
        if (strcmp(unit_factors[i].unit, unit) == 0) {
            return i;  // Return the index of the found unit
        } 

    }
    return -1;  // Return -1 if the unit is not found
}

double convert_units(double value, const char* from_unit, const char* to_unit) {
    // Find the index of the from_unit and to_unit in the unit_factors array
    int from_idx = unit_factors_find(from_unit);
    int to_idx = unit_factors_find(to_unit);

    if (from_idx != -1 && to_idx != -1) {
        printf("From unit: %s, factor: %e\n", from_unit, unit_factors[from_idx].factor);
printf("To unit: %s, factor: %e\n", to_unit, unit_factors[to_idx].factor);

        // Convert the value to the base unit (assuming base unit is meters or kilograms, etc.)
        double value_in_base = value * unit_factors[from_idx].factor;
        // Convert from the base unit to the target unit
        return value_in_base / unit_factors[to_idx].factor;

        



    } else {
        // Invalid units
        printf("Error: Invalid unit\n");
        return -1;
    }
}

// Function to handle unit conversion command
void unitCommand(int argc, char* argv[]) {
    if (argc != 5) {
        printf("Usage: %s unit <value> <from_unit> <to_unit>\n", argv[0]);
        return;
    }

    // Parse arguments
    double value = atof(argv[2]);
    char* from_unit = argv[3];
    char* to_unit = argv[4];
    double result = convert_units(value, from_unit, to_unit);

    if (result != -1) {
      //  printf("%f %s is equal to %f %s\n", value, from_unit, result, to_unit);
      printf("%f %s is equal to %e %s\n", value, from_unit, result, to_unit);

    }
}




void helpCommand(void) {

printf("$$$-----------------------------------$$$\n");
printf("\n");
printf("\n");


 printf(INFO "## Balance Chemical Equations\n" RESET);
 fflush(stdout);
    printf("Input: An unbalanced equation (e.g., H2 + O2 -> H2O).\n");
    printf("Output: A balanced equation (e.g., 2H2 + O2 -> 2H2O).\n\n");

    printf("## Calculate Molar Mass\n");
    printf("Input: A chemical formula (e.g., H2O).\n");
    printf("Output: The molar mass in grams per mole (e.g., 18.015 g/mol).\n\n");

    printf("## Identify Reaction Type\n");
    printf("Input: A chemical equation.\n");
    printf("Output: The reaction type (e.g., synthesis, decomposition, single replacement, double replacement, or combustion).\n\n");

    printf("## Predict Products\n");
    printf("Input: Reactants and reaction type (if known).\n");
    printf("Output: Possible products (e.g., Na + Cl2 -> NaCl).\n\n");

    printf("## Stoichiometric Calculations\n");
    printf("Input: Balanced equation, given mass/moles of a reactant or product.\n");
    printf("Output: Amounts of other reactants or products.\n\n");

    printf("## Empirical and Molecular Formula Calculations\n");
    printf("Input: Percentage composition or molar mass and empirical formula.\n");
    printf("Output: Empirical or molecular formula.\n\n");

    printf("## Convert Units\n");
    printf("Options: Convert between grams, moles, and molecules using molar mass and Avogadro’s number.\n\n");

    printf("## Check Validity of Input\n");
    printf("Input: A chemical equation or formula.\n");
    printf("Output: Validation of syntax (e.g., no invalid elements or mismatched parentheses).\n\n");

    printf("Made by Ivan Koskov in 2025 under MIT license\n");



    printf(CYAN "Parameters available:\n" RESET);
    fflush(stdout);
printf(YELLOW "SItool !help . . : triggers this window\n" RESET);
fflush(stdout);
printf("SItool control .  : displays info about the tool\n");
fflush(stdout);
printf("SItool unit . : for unit conversion \n");
fflush(stdout);
printf(RED "Read the README.md file for more info\n" RESET);
fflush(stdout);


}


//

