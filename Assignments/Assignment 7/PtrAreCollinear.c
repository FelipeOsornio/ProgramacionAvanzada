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

int computeSlope(const Point2D * const point2DA, const Point2D * const point2DB) {
    int subY = point2DB->y - point2DA->y;
    int subX = point2DB->x - point2DA->x;

    return subY / subX;
}

int areCollinear(const Point2D * const point2DA, const Point2D *point2DB, const Point2D * const point2DC) {
    int slopeA = computeSlope(point2DA, point2DB);
    int slopeB = computeSlope(point2DA, point2DC);
    int slopeC = computeSlope(point2DB, point2DC);

    return slopeA == slopeB && slopeA == slopeC && slopeB == slopeC;
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

    int pointXC, pointYC;
    scanf("%i", &pointXC);
    scanf("%i", &pointYC);

    Point2D* point2DC = initializedPoint2D();
    point2DC->x = pointXC;
    point2DC->y = pointYC;

    printf("%i", areCollinear(point2DA, point2DB, point2DC));

    freePoint2D(point2DA);
    freePoint2D(point2DB);
    freePoint2D(point2DC);

    return 0;
}
