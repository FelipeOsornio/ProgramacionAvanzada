//
// Created by Felipe Osornio on 2019-09-12.
//

#include <stdio.h>

char* season(int month, int day) {
    if ((month == 12 && day >= 16 && day <= 31) || (month == 1 && day >= 1 && day <= 31) ||
        (month == 2 && day >= 1 && day <= 31) || (month == 3 && day >= 1 && day <= 15))
        return "Winter";
    else if ((month == 3 && day >= 16 && day <= 31) || (month == 4 && day >= 1 && day <= 31) ||
             (month == 5 && day >= 1 && day <= 31) || (month == 6 && day >= 1 && day <= 15))
        return "Spring";
    else if ((month == 6 && day >= 16 && day <= 31) || (month == 7 && day >= 1 && day <= 31) ||
             (month == 8 && day >= 1 && day <= 31) || (month == 9 && day >= 1 && day <= 15))
        return "Summer";
    else
        return "Fall";
}

int main() {
    int month, day;

    scanf("%i", &month);
    scanf("%i", &day);

    printf("%s", season(month, day));

    return 0;
}

