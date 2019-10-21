//
// Created by Felipe Osornio on 2019-09-10.
//

#include <stdio.h>

int countFactors(int number) {
    int counter = 0;

    for (int looper = 1; looper <= number; looper++) {
        if (number % looper == 0) {
            counter++;
        }
    }

    return counter;
}

int main() {
    int number;
    scanf("%i", &number);
    printf("%i", countFactors(number));

    return 0;
}