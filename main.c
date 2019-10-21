//
// Created by Felipe Osornio on 2019-10-09.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int width;
    int height;
} Rectangle;

Rectangle *initializedRectangle() {
    Rectangle *rectanglePtr = (Rectangle *) malloc(sizeof(Rectangle));
    return rectanglePtr;
}

void freeRectangle(Rectangle *rectanglePtr) {
    free(rectanglePtr);
}

Rectangle* unitRectangles(const Rectangle * const rectanglePtrA, const Rectangle * const rectanglePtrB) {
    int x = rectanglePtrA->x > rectanglePtrB->x ? rectanglePtrA->x : rectanglePtrB->x;
    int y = rectanglePtrA->y > rectanglePtrB->y ? rectanglePtrA->y : rectanglePtrB->y;

    int widthA = rectanglePtrA->x + rectanglePtrA->width;
    int heightA = rectanglePtrA->y + rectanglePtrA->height;
    int widthB = rectanglePtrB->x + rectanglePtrB->width;
    int heightB = rectanglePtrB->y + rectanglePtrB->height;

    int maxWidth = widthA < widthB ? widthA : widthB;
    int maxHeight = heightA < heightB ? heightA : heightB;

    Rectangle* tempRectangle = initializedRectangle();
    tempRectangle->x = x;
    tempRectangle->y = y;
    tempRectangle->width = maxWidth - x;
    tempRectangle->height = maxHeight - y;

    return tempRectangle;
}

int main() {
    int pointXA, pointYA, widthA, heightA;
    scanf("%i", &pointXA);
    scanf("%i", &pointYA);
    scanf("%i", &widthA);
    scanf("%i", &heightA);

    Rectangle* rectanglePtrA = initializedRectangle();
    rectanglePtrA->x = pointXA;
    rectanglePtrA->y = pointYA;
    rectanglePtrA->width = widthA;
    rectanglePtrA->height = heightA;

    int pointXB, pointYB, widthB, heightB;
    scanf("%i", &pointXB);
    scanf("%i", &pointYB);
    scanf("%i", &widthB);
    scanf("%i", &heightB);

    Rectangle* rectanglePtrB = initializedRectangle();
    rectanglePtrB->x = pointXB;
    rectanglePtrB->y = pointYB;
    rectanglePtrB->width = widthB;
    rectanglePtrB->height = heightB;

    Rectangle* tempRectangle = unitRectangles(rectanglePtrA, rectanglePtrB);
    printf("%i\n%i\n%i\n%i", tempRectangle->x, tempRectangle->y, tempRectangle->width, tempRectangle->height);

    freeRectangle(rectanglePtrA);
    freeRectangle(rectanglePtrB);

    return 0;
}
