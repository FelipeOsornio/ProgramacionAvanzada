//
// Created by Felipe Osornio on 2019-09-24.
//

#include <stdio.h>

int circularLeftShift(int n1, int n2){
    unsigned int a = 0;
    unsigned int b = 0;

    for(int i = 0; i < n2; i++){
        a = 1 << 31 & n1;
        b = a >> 31;
        n1 <<= 1;
        n1 |= b;
    }

    return n1;
}

int main(void) {
    int number;
    int position;

    scanf("%i", &number);
    scanf("%i", &position);

    printf("%u", circularLeftShift(number, position));
    return 0;
}