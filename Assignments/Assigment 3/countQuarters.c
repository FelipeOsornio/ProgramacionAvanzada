//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>

int countQuarters(int cents) {
    return cents / 25;
}

int main() {
    int dollars;

    scanf("%i", &dollars);

    printf("%i", countQuarters(dollars % 100));

    return 0;
}
