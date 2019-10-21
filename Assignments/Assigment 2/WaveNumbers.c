//
// Created by Felipe Osornio on 2019-08-29.
//

#include <stdio.h>
#include<string.h>

int main() {

    char numbers[10][4] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

    int arrLength = sizeof(numbers) / sizeof(int);
    int counter = 1;

    char setNumbers[120] = "";
    char wave[120] = "";
    char line[120] = "";

    for (int times = 0; times < 2; ++times) {
        for (int iterator = 0; iterator < arrLength; ++iterator) {
            for (int duplicator = 0; duplicator < 2; ++duplicator) {
                strcat(setNumbers, numbers[iterator]);
                strcat(line, "-");

                if (counter % 4 == 0) {
                    strcat(wave, "_-^-");
                }

                counter++;
            }
        }
    }

    printf("%s", line);
    printf("%s\n", wave);
    printf("%s\n", setNumbers);
    printf("%s", line);

    return 0;
}
