//
// Created by Felipe Osornio on 2019-09-24.
//

#include <stdio.h>

int palindrobit(int number) {
    int reverse = 0, mask = 1, temp = number;

    while (temp > 0) {
        reverse = (reverse << mask) | (temp >> mask);
        temp >>= mask;
    }

    return reverse == number ? 1 : 0;
}

int main() {
    int number;
    scanf("%i", &number);
    printf("%i", palindrobit(number));

    return 0;
}
