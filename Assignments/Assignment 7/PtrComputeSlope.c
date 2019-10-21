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

void freeFraction(Point2D *point2DPtr) {
    free(point2DPtr);
}

float computeSlope(const Point2D * const point2DA, const Point2D * const point2DB) {
    float subY = point2DB->y - point2DA->y;
    float subX = point2DB->x - point2DA->x;

    return subY / subX;
}

int main() {
    int pointXA, pointYA;
    scanf("%i", &pointXA);
    scanf("%i", &pointYA);

    Point2D* point2DA = initializedPoint2D();
    point2DA->x = pointXA;
    point2DA->y = pointYA;

    int pointXB, pointYB;
    scanf("%i", &pointXB);
    scanf("%i", &pointYB);

    Point2D* point2DB = initializedPoint2D();
    point2DB->x = pointXB;
    point2DB->y = pointYB;

    printf("%.1f", computeSlope(point2DA, point2DB));

    freeFraction(point2DA);

    return 0;
}