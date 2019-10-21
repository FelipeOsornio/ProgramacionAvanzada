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

int quadrant(const Point2D * const point2D) {
    int x = point2D->x;
    int y = point2D->y;

    return x > 0 && y > 0 ? 1 :
           x < 0 && y > 0 ? 2 :
           x < 0 && y < 0 ? 3 :
           x > 0 && y < 0 ? 4 : 0;
}

int main() {
    int pointX, pointY;
    scanf("%i", &pointX);
    scanf("%i", &pointY);

    Point2D* point2D = initializedPoint2D();
    point2D->x = pointX;
    point2D->y = pointY;

    printf("%i", quadrant(point2D));

    freePoint2D(point2D);

    return 0;
}
