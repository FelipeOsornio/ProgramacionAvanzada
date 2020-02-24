//
// Created by Felipe Osornio on 2019-09-17.
//

#include <stdio.h>

int showTwos(int number, int count) {
    if (number % 2 == 0) {
        count++;
        printf("2 * ");
        return showTwos(number / 2, count);
    } else {
        return number;
    }
}

int main() {
    int number, count = 0;
    scanf("%i", &number);
    printf("%i = ", number);
    printf("%i", showTwos(number, count));
    return 0;
}