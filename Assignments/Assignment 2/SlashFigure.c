//
// Created by Felipe Osornio on 2019-08-30.
//

#include <stdio.h>
#include<string.h>

char* getLine(int borders) {

    char graphic[250] = "";
    char leftBorder[250] = "";
    char rightBorder[250] = "";

    int totalLength = 22 - (borders * 2);

    for (int looper = 0; looper < borders; ++looper) {
        strcat(leftBorder, "\\");
        strcat(rightBorder, "/");
    }

    strcat(graphic, leftBorder);
    for (int looper = 0; looper < totalLength; ++looper) {
        strcat(graphic, "!");
    }

    return strcat(graphic, rightBorder);;

}


int main() {

    char graphic[500] = "";
    int counter = 0;

    for (int index = 0; index < 6; ++index) {
        strcat(graphic, getLine(counter));
        strcat(graphic, "\n");
        counter += 2;
    }

    printf("%s\n", graphic);

    return 0;

}


