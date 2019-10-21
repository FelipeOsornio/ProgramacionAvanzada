//
// Created by Felipe Osornio on 2019-10-09.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point2D;

Point2D *initializedPoint2D() {
    Point2D *point2DPtr = (Point2D *) malloc(sizeof(Point2D));
    return point2DPtr;
}

void freePoint2D(Point2D *point2DPtr) {
    free(point2DPtr);
}

void swapAndNegate(Point2D * const point2D) {
    int temp = point2D->x;
    point2D->x = point2D->y;
    point2D->y = temp;

    point2D->x *= -1;
    point2D->y *= -1;
}

int main() {
    int pointX, pointY;
    scanf("%i", &pointX);
    scanf("%i", &pointY);

    Point2D* point2D = initializedPoint2D();
    point2D->x = pointX;
    point2D->y = pointY;

    swapAndNegate(point2D);
    printf("%i\n%i", point2D->x, point2D->y);
    freePoint2D(point2D);

    return 0;
}
