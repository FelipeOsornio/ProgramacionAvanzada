//
// Created by Felipe Osornio on 2019-10-13.
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

int rectangleContainsPoint(const Point2D * const point2DA, const Point2D * const point2DB, int width, int height) {
    int boundPointX = point2DA->x + width;
    int boundPointY = point2DA->y + height;

    return point2DB->x >= point2DA->x && point2DB->x <= boundPointX &&
           point2DB->y >= point2DA->y && point2DB->y <= boundPointY;
}

int main() {
    int pointXA, pointYA;
    scanf("%i", &pointXA);
    scanf("%i", &pointYA);

    Point2D* point2DA = initializedPoint2D();
    point2DA->x = pointXA;
    point2DA->y = pointYA;

    int width, height;
    scanf("%i", &width);
    scanf("%i", &height);

    int pointXB, pointYB;
    scanf("%i", &pointXB);
    scanf("%i", &pointYB);

    Point2D* point2DB = initializedPoint2D();
    point2DB->x = pointXB;
    point2DB->y = pointYB;

    printf("%i", rectangleContainsPoint(point2DA, point2DB, width, height));

    freePoint2D(point2DA);
    freePoint2D(point2DB);

    return 0;
}