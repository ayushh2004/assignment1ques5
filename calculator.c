#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract one number from another
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide one number by another
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        exit(EXIT_FAILURE);
    }
}
