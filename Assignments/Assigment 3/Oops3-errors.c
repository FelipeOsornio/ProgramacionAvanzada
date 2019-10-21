//
// Created by Felipe Osornio on 2019-09-03.
//

#include <stdio.h>

static int printer(double x, double y, double bubble) {
    int z = 5;
    printf("x = %.2f and y = %.1f\n", x, y);
    printf("x = %.2f and y = %.4f\n", x, bubble);
    printf("The value from main is: %.4f\n", bubble);

    return z;
}

int main(void) {

    double bubble = 867.5309;
    double x = 10.01;
    double y = 8.0;

    int z = printer(x, y, bubble);
    printf("z = %d", z);

    return 0;
}


