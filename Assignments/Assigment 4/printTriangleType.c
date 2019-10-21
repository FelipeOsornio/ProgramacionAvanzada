//
// Created by Felipe Osornio on 2019-09-12.
//

#include <stdio.h>

void printTriangleType(int a, int b, int c) {
    if (a == b && b == c && a == c)
        printf("equilateral");
    else if (a == b || a == c || b == c)
        printf("isosceles");
    else
        printf("scalene");
}

int main() {
    int a, b, c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    printTriangleType(a, b, c);

    return 0;
}

