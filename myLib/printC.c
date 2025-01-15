#include <stdio.h>


// Function to print text in green
void printGreen(char *msg) {
    printf("\x1b[32m%s\x1b[0m", msg);
}

// Function to print text in red
void printRed(char *msg) {
    printf("\x1b[31m%s\x1b[0m", msg);
}

// Function to print text in yellow
void printYellow(char *msg) {
    printf("\x1b[33m%s\x1b[0m", msg);
}

// Function to print text in blue
void printBlue(char *msg) {
    printf("\x1b[34m%s\x1b[0m", msg);
}

// Function to print text in magenta
void printMagenta(char *msg) {
    printf("\x1b[35m%s\x1b[0m", msg);
}

// Function to print text in cyan
void printCyan(char *msg) {
    printf("\x1b[36m%s\x1b[0m", msg);
}

// Function to print bold text
void printBold(char *msg) {
    printf("\x1b[1m%s\x1b[0m", msg);
}

// Function to print bold and colored text
void printBoldColor(char *msg) {
    printf("\x1b[1;%dm%s\x1b[0m", 33, msg);
}

void printGray(char *msg) {
    printf("\x1b[90m%s\x1b[0m", msg);
}