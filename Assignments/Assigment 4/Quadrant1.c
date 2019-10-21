//
// Created by Felipe Osornio on 2019-09-12.
//

#include <stdio.h>

int quadrant(int x, int y) {
    return x == 0 || y == 0 ? 0 : x > 0 && y > 0 ? 1 : x < 0 && y > 0 ? 2 : x > 0 && y < 0 ? 4 : 3;
}

int main() {
    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);

    printf("%i", quadrant(x, y));

    return 0;
}
