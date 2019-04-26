#include <stdio.h>

int reverseBits(int input) {
    int output = 0;
    int numberOfBits = sizeof(int) * 8;
    for(int i = 0; i < numberOfBits; i++) {
        int singleBit = input >> i & 1;
        output = output << 1 | singleBit;
    }
    return output;
}

int main(int argc, char **argv) {
    int input = 0;
    printf("Enter the hex input number:");
    scanf("%X", &input);
    printf("I/P = %X\nO/P = %X\n", input, reverseBits(input));
    return 0;
}

