#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert an integer to its binary representation string
char* printBinaryConfig(int num) {
    // Allocate memory for the binary string (32 bits + 3 spaces + 1 null terminator)
    char *binaryStr = (char *)malloc(35 * sizeof(char));
    if (binaryStr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Set all positions to '0' initially
    memset(binaryStr, '0', 35);
    binaryStr[34] = '\0'; // Null-terminate the string

    // Fill the binary string
    for (int i = 0; i < 32; i++) {
        if (num & (1 << (31 - i))) {
            binaryStr[i + (i / 8)] = '1';
        }
        if ((i + 1) % 8 == 0 && i != 31) {
            binaryStr[i + (i / 8) + 1] = ' ';
        }
    }

    return binaryStr;
}

int main(void) {
    int dec = 42;
    int hex = 0x2a;
    int bin = 0b101010;
    int oct = 052;
    
    //char* binaryStr = printBinaryConfig(number);
    //printf("%s\n", binaryStr);
    printf("DEC: %s:\n", printBinaryConfig(dec));
    printf("HEX: %s:\n", printBinaryConfig(hex));
    printf("BIN: %s:\n", printBinaryConfig(bin));
    printf("OCT: %s:\n", printBinaryConfig(oct));

    // Free the allocated memory
    //free(binaryStr);

    return 0;
}
