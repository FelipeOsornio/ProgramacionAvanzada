//
// Created by Felipe Osornio on 2019-09-10.
//

#include <string.h>
#include <stdio.h>

int zeroDigits(char* strNumber) {
    int counter = 0;

    for (int index = 0; index < strlen(strNumber); index++) {
        if (strNumber[index] == '0') {
            counter += 1;
        }
    }

    return counter;
}

int main() {
    int number = 0;
    char strNumber[100] = "";

    scanf("%d", &number);

    if(number >= 0) {
        snprintf(strNumber, 10, "%i", number);
        printf("%i", zeroDigits(strNumber));
    }


    return 0;
}