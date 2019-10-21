//
// Created by Felipe Osornio on 2019-08-29.
//

#include <stdio.h>
#include<string.h>

int main() {

    char numbers[10][4] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    char setNumbers[120] = "";

    for (int looper = 0; looper < 10; ++looper) {
        for (int i = 0; i < 3; ++i) {
            strcat(setNumbers, numbers[looper]);
        }
    }

    for (int times = 0; times < 3; ++times) {
        printf("%s\n", setNumbers);
    }

    return 0;
}
