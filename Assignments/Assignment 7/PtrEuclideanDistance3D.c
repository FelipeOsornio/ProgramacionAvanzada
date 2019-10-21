//
// Created by Felipe Osornio on 2019-10-09.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define POW 2

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

Point3D *initializedPoint3D() {
    Point3D *point3DPtr = (Point3D *) malloc(sizeof(Point3D));
    return point3DPtr;
}

void freePoint3D(Point3D *point3DPtr) {
    free(point3DPtr);
}

float euclideanDistance(const Point3D * const point3DA, const Point3D * const point3DB) {
    int subA = point3DA->x - point3DB->x;
    int expA = pow(subA, POW);

    int subB = point3DA->y - point3DB->y;
    int expB = pow(subB, POW);

    int subC = point3DA->z - point3DB->z;
    int expC = pow(subC, POW);

    float addition = expA + expB + expC;
    return sqrtf(addition);
}

int main() {
    int pointXA, pointYA, pointZA;
    scanf("%i", &pointXA);
    scanf("%i", &pointYA);
    scanf("%i", &pointZA);

    int pointXB, pointYB, pointZB;
    scanf("%i", &pointXB);
    scanf("%i", &pointYB);
    scanf("%i", &pointZB);

    Point3D* point3DA = initializedPoint3D();
    point3DA->x = pointXA;
    point3DA->y = pointYA;
    point3DA->z = pointZA;

    Point3D* point3DB = initializedPoint3D();
    point3DB->x = pointXB;
    point3DB->y = pointYB;
    point3DB->z = pointZB;

    printf("%.2f", euclideanDistance(point3DA, point3DB));

    freePoint3D(point3DA);
    freePoint3D(point3DB);

    return 0;
}
