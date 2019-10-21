//
// Created by Felipe Osornio on 2019-09-10.
//

#include <stdio.h>

int main() {
    int number;
    scanf("%i", &number);
    printf("%s", number % 2 == 0 ? "even" : "odd");

    return 0;
}
