//
// Created by Felipe Osornio on 2019-09-12.
//

#include <stdio.h>

void printRange(int a, int b) {
    if (a < b) {
        for (int index = a; index <= b; index++) {
            printf("%d ", index);
        }
    } else if (a > b) {
        for (int index = a; index > b - 1; index--) {
            printf("%d ", index);
        }
    } else if (b == a) {
        printf("%d ", a);
    }
}

int main() {
    int first, second;

    scanf("%d", &first);
    scanf("%d", &second);

    printRange(first, second);

    return 0;
}
