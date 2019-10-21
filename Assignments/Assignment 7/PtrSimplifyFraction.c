//
// Created by Felipe Osornio on 2019-10-09.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

Fraction *initializedFraction() {
    Fraction *fractionPtr = (Fraction *) malloc(sizeof(Fraction));
    return fractionPtr;
}

void freeFraction(Fraction *fractionPtr) {
    free(fractionPtr);
}

int greatCommonDivisor(int numerator, int denominator) {
    int gcd, remainder;

    while (numerator != 0) {
        remainder = denominator % numerator;
        denominator = numerator;
        numerator = remainder;
    }

    gcd = denominator;
    return gcd;
}

Fraction* simplifyFraction(const Fraction * const fractionPtr) {
    int numSimplified =
            fractionPtr->numerator / greatCommonDivisor(fractionPtr->numerator, fractionPtr->denominator);
    int denSimplified =
            fractionPtr->denominator / greatCommonDivisor(fractionPtr->numerator, fractionPtr->denominator);

    Fraction* tempFractionPtr = initializedFraction();
    tempFractionPtr->numerator = numSimplified;
    tempFractionPtr->denominator = denSimplified;

    return tempFractionPtr;
}

int main() {
    int num, den;
    scanf("%i", &num);
    scanf("%i", &den);

    Fraction* fractionPtr = initializedFraction();
    fractionPtr->numerator = num;
    fractionPtr->denominator = den;

    Fraction* tempFractionPtr = simplifyFraction(fractionPtr);
    printf("%i\n%i", tempFractionPtr->numerator, tempFractionPtr->denominator);

    freeFraction(tempFractionPtr);
    freeFraction(fractionPtr);

    return 0;
}
