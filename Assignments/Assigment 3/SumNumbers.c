//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>

int main() {
    int low;
    int high;
    int counter = 0;

    scanf("%i", &low);
    scanf("%i", &high);

    for (int looper = low; looper <= high; ++looper) {
        counter += looper;
    }

    printf("low? high? sum = %i", counter);

    return 0;
}
