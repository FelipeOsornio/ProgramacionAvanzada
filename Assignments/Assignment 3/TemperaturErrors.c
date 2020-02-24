//
// Created by Felipe Osornio on 2019-09-03.
//

#include "stdio.h"

static void ftoc(double tempf, double tempc) {
    tempc = (tempf - 32) * 5 / 9;
    printf("Body temp in C is: %.1f", tempc);
}

int main(void) {

    double tempf = 98.6;
    double tempc = 0.0;
    ftoc(tempf, tempc);

    return 0;
}

