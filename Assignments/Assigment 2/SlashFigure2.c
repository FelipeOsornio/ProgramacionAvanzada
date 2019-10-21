//
// Created by Felipe Osornio on 2019-08-30.
//

#include <stdio.h>
#include<string.h>

char* getLine(int limit, int borders) {

    char graphic[250] = "";
    char leftBorder[250] = "";
    char rightBorder[250] = "";

    int totalLength = limit - (borders * 2);

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
    int numberLevel = 0;
    int repetition = 0;

    scanf("%d", &numberLevel);
    repetition = (numberLevel * 4) - 2;

    for (int index = 0; index < numberLevel; ++index) {
        strcat(graphic, getLine(repetition, counter));
        strcat(graphic, "\n");
        counter += 2;
    }

    printf("%s\n", graphic);

    return 0;

}


