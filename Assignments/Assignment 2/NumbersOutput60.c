//
// Created by Felipe Osornio on 2019-09-02.
//

#include <stdio.h>
#include <string.h>

int main() {

    char lines[200] = "";
    char numbers[200] = "";
    char nums[10][4] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

    for (int times = 0; times < 6; ++times) {
        for (int looper = 1; looper < 10; ++looper) {
            strcat(lines, " ");
            if (looper % 8 == 0) {
                strcat(lines, "|");
            }
            strcat(numbers, nums[looper - 1]);
        }
        strcat(numbers, nums[9]);
    }

    printf("%s\n", lines);
    printf("%s", numbers);

    return 0;
}

