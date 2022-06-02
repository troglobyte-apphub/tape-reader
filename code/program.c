//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.h"
#include <stdio.h>

//
// Should greet the user into the program
//
const char *greet()
{
    return "Hello, C Developer.";
} // end of func greet

//
// overview:
//  This is where all Troglobyte apps start there operation.
//
//  We can also give command-line arguments in C. CLI
//  arguments are given after the name of the program in
//  command-line shell of Operating Systems.
//
// function arguments:
// -> argc: stores the number of command-line arguments passed in.
// -> argv: array of character pointers listing all the arguments.
int foundation(int argc, char **argv)
{
    printf("%s\n", greet());
    return 0;
} // end of func foundation
