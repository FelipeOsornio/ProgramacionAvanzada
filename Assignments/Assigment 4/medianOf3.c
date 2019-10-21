//
// Created by Felipe Osornio on 2019-09-10.
//

#include <stdio.h>

int middle(int a, int b, int c) {
    int min = a < c && a < b ? a : b < c && b < a ? b : c;
    int max = a > c && a > b ? a : b > c && b > a ? b : c;
    int middle = a > min && a < max ? a : b > min && b < max ? b : c;

    return middle;
}

int main() {
    int a, b, c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    printf("%i", middle(a, b, c));

    return 0;
}
