//
// Created by Felipe Osornio on 2019-09-16.
//

#include <stdio.h>
#include <string.h>

void perfectNumbers(number) {
    char perfectNumbers[100] = "";

    for (int i = 1; i <= number; i++) {
        int accum = 0;
        char strAccum[100] = "";

        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                accum += j;
            }
        }

        if (accum == i) {
            sprintf(strAccum, "%d ", accum);
            strcat(perfectNumbers, strAccum);
        }
    }

    printf("Perfect numbers up to %i: %s", number, perfectNumbers);
}

int main() {
    int number;
    scanf("%i", &number);
    perfectNumbers(number);

    return 0;
}



