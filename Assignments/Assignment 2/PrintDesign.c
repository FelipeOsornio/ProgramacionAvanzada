//
// Created by Felipe Osornio on 2019-08-29.
//

#include <stdio.h>
#include<string.h>

char* getGraphic(int lines, int numberTimes, char* value) {
    char graphic[100] = "";

    for (int looper = 0; looper < lines; ++looper) {
        strcat(graphic, "-");
    }

    char complement[100] = "";
    strcat(complement, graphic);

    for (int looper = 0; looper < numberTimes; ++looper) {
        strcat(graphic, value);
    }

    return strcat(graphic, complement);
}

int main() {

    char lines[250] = "";
    char numbers[5][4] = {"1", "3", "5", "7", "9"};

    int counterLines = 5;
    int counterNumberTimes = 1;

    for (int looper = 0; looper < 5; ++looper) {
        strcat(lines, getGraphic(counterLines, counterNumberTimes, numbers[looper]));
        counterLines--;
        counterNumberTimes += 2;
        strcat(lines, "\n");
    }

    printf("%s", lines);

    return 0;
}


