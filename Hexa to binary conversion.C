#include <stdio.h>
#include <conio.h>
#include <string.h>

void hexDigitToBinary(char hex) {
    switch (hex) {
        case '0': printf("0000"); break;
        case '1': printf("0001"); break;
        case '2': printf("0010"); break;
        case '3': printf("0011"); break;
        case '4': printf("0100"); break;
        case '5': printf("0101"); break;
        case '6': printf("0110"); break;
        case '7': printf("0111"); break;
        case '8': printf("1000"); break;
        case '9': printf("1001"); break;
        case 'A': case 'a': printf("1010"); break;
        case 'B': case 'b': printf("1011"); break;
        case 'C': case 'c': printf("1100"); break;
        case 'D': case 'd': printf("1101"); break;
        case 'E': case 'e': printf("1110"); break;
        case 'F': case 'f': printf("1111"); break;
        default: 
            printf("\nInvalid hex digit %c\n", hex);
            break;
    }
}

int main() {
    char hexNumber[20];
    int i, length;

    clrscr();  // Clear screen in Turbo C

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNumber);

    length = strlen(hexNumber);

    printf("Binary equivalent: ");
    for(i = 0; i < length; i++) {
        hexDigitToBinary(hexNumber[i]);
    }

    printf("\n");
    getch();  // Wait for key press before exiting
    return 0;
}
