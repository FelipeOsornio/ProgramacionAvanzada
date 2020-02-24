//
// Created by Felipe Osornio on 2019-08-30.
//

#include <stdio.h>
#include<string.h>

char* middleStars(int length) {
    char stars[500] = "";

    for (int looper = 0; looper < length - 1; looper++) {
        strcat(stars, "*");
    }

    return strcat(stars, "*");
}

char* middleDollars(int length) {
    char dollars[500] = "";

    for (int looper = 0; looper < length - 1; looper++) {
        strcat(dollars, "$");
    }

    return strcat(dollars, "$");
}

char* borders(int length) {
    char borderStars[500] = "";

    if (length == 0) {
        return "";
    } else {
        for (int looper = 0; looper < length - 1; looper++) {
            strcat(borderStars, "*");
        }

        return strcat(borderStars, "*");
    }

}

char* adjust(int borderLen, int starLen, int dollarLen) {
    char line[250] = "";

    strcat(line, borders(borderLen));
    strcat(line, middleDollars(dollarLen));
    strcat(line, middleStars(starLen));
    strcat(line, middleDollars(dollarLen));

    return strcat(line, borders(borderLen));
}

int main() {

    char graphic[250] = "";

    int border = 0;
    int middleStars = 14;
    int middleDollars = 7;

    for (int looper = 0; looper < 7; looper++) {
        strcat(graphic, adjust(border, middleStars, middleDollars));
        border += 2;
        middleStars -= 2;
        middleDollars--;
        strcat(graphic, "\n");
    }

    printf("%s", graphic);

    return 0;

}


