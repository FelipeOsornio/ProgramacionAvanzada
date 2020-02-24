//
// Created by Felipe Osornio on 2019-09-02.
//

#include <stdio.h>

int main() {

    char partsRocket[18][12] = {"   /\\    ", "  /  \\   ", " /    \\  ", "+------+ ", "|      | ", "|      | ",
                                "+------+ ", "| Viva | ", "|Mexico| ", "+------+ ", "|      | ", "|      | ",
                                "+------+ ", "   /\\    ", "  /  \\   ", " /    \\  "};

    int times;
    scanf("%d", &times);

    for (int looper = 0; looper < 16; ++looper) {
        for (int time = 0; time < times; ++time) {
            printf("%s", partsRocket[looper]);
        }
        printf("\n");
    }

    return 0;
}




