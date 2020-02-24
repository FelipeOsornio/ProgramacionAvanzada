//
// Felipe Osornio - A01377154
// Fecha: 19/11/19
// Assignment
//

#include "assignment8.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


Instance* createInstance(unsigned int length) {
	Instance* ptrInstance = malloc(sizeof(Instance));
	ptrInstance->length = length;
	ptrInstance->features = calloc(ptrInstance->length, sizeof(double));
	ptrInstance->featureTypes = calloc(ptrInstance->length, sizeof(FeatureType));
	return ptrInstance;
}

void releaseInstance(Instance* ptrInstance) {
	free(ptrInstance->features);
	free(ptrInstance->featureTypes);
	free(ptrInstance);
}

double computeEuclideanDissimilarity(const Instance* const ptrInstanceA, const Instance* const ptrInstanceB) {
	if (ptrInstanceA->length == 0 || ptrInstanceB->length == 0) {
		return -1;
	}
	else if (ptrInstanceA->length != ptrInstanceB->length) {
		return -2;
	}
	else {
		for (int i = 0; i < ptrInstanceA->length; i++) {
			if (ptrInstanceA->featureTypes[i] != ptrInstanceB->featureTypes[i]) {
				return -3;
			}
		}
	}

	double distance = 0;

	for (int i = 0; i < ptrInstanceA->length; i++) {
		distance += ptrInstanceA->featureTypes[i] == numerical ?
			pow((ptrInstanceA->features[i] - ptrInstanceB->features[i]), 2) :
			ptrInstanceA->features[i] == ptrInstanceB->features[i] ? 0 : 1;
	}

	return sqrt(distance);
}

Instance* findNearestNeighbor(const Instance* const ptrInstance, const int length, const Instance* const query,
	double (*computeDissimilarity)(const Instance* const, const Instance* const)) {

	int index = 0;
	double firstDistance = computeDissimilarity(&ptrInstance[0], query);

	if (firstDistance == -1) {
		return -1;
	}
	else if (firstDistance == -2) {
		return -2;
	}
	else if (firstDistance == -3) {
		return -3;
	}
	else {

		for (int i = 0; i < length; i++) {
			double distance = computeDissimilarity(&ptrInstance[i], query);
			if (distance == -1) {
				return -1;
			}
			else if (distance == -2) {
				return -2;
			}
			else if (distance == -3) {
				return -3;
			}
			else if (distance < firstDistance) {
				firstDistance = distance;
				index = i;
			}
		}
	}

	return &ptrInstance[index];
}

int testComputeEuclideanDissimilarityA() {
	Instance* ptrInstanceA = createInstance(0);
	Instance* ptrInstanceB = createInstance(4);

	double euclideanDissimilarity = computeEuclideanDissimilarity(ptrInstanceA, ptrInstanceB);

	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	return euclideanDissimilarity == -1;
}

int testComputeEuclideanDissimilarityB() {
	Instance* ptrInstanceA = createInstance(6);
	Instance* ptrInstanceB = createInstance(4);

	double euclideanDissimilarity = computeEuclideanDissimilarity(ptrInstanceA, ptrInstanceB);

	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	return euclideanDissimilarity == -2;
}

int testComputeEuclideanDissimilarityC() {
	Instance* ptrInstanceA = createInstance(4);
	ptrInstanceA->featureTypes[0] = nominal;
	ptrInstanceA->featureTypes[1] = nominal;
	ptrInstanceA->featureTypes[2] = numerical;
	ptrInstanceA->featureTypes[3] = numerical;

	Instance* ptrInstanceB = createInstance(4);
	ptrInstanceB->featureTypes[0] = nominal;
	ptrInstanceB->featureTypes[1] = numerical;
	ptrInstanceB->featureTypes[2] = numerical;
	ptrInstanceB->featureTypes[3] = numerical;

	double euclideanDissimilarity = computeEuclideanDissimilarity(ptrInstanceA, ptrInstanceB);

	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	return euclideanDissimilarity == -3;
}

int testComputeEuclideanDissimilarityD() {
	Instance* ptrInstanceA = createInstance(4);
	ptrInstanceA->featureTypes[0] = numerical;
	ptrInstanceA->featureTypes[1] = numerical;
	ptrInstanceA->featureTypes[2] = nominal;
	ptrInstanceA->featureTypes[3] = nominal;
	ptrInstanceA->features[0] = 8;
	ptrInstanceA->features[1] = 3;
	ptrInstanceA->features[2] = 3;
	ptrInstanceA->features[3] = 8;

	Instance* ptrInstanceB = createInstance(4);
	ptrInstanceB->featureTypes[0] = numerical;
	ptrInstanceB->featureTypes[1] = numerical;
	ptrInstanceB->featureTypes[2] = nominal;
	ptrInstanceB->featureTypes[3] = nominal;
	ptrInstanceB->features[0] = 5;
	ptrInstanceB->features[1] = 2;
	ptrInstanceB->features[2] = 3;
	ptrInstanceB->features[3] = 3;

	double euclideanDissimilarity = computeEuclideanDissimilarity(ptrInstanceA, ptrInstanceB);

	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	return euclideanDissimilarity == sqrt(11);
}

int testFindNearestNeighborA() {
	Instance* ptrInstanceArray = calloc(2, sizeof(Instance));

	Instance* query = createInstance(4);
	Instance* ptrInstanceA = createInstance(0);
	Instance* ptrInstanceB = createInstance(4);
	ptrInstanceArray[0] = *ptrInstanceA; ptrInstanceArray[1] = *ptrInstanceB;

	int nearestNeighbor = findNearestNeighbor(ptrInstanceArray, 2, query, &computeEuclideanDissimilarity);

	releaseInstance(query);
	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	free(ptrInstanceArray);

	return nearestNeighbor == -1;
}

int testFindNearestNeighborB() {
	Instance* ptrInstanceArray = calloc(2, sizeof(Instance));

	Instance* query = createInstance(4);
	Instance* ptrInstanceA = createInstance(4);
	Instance* ptrInstanceB = createInstance(6);
	ptrInstanceArray[0] = *ptrInstanceA; ptrInstanceArray[1] = *ptrInstanceB;

	int nearestNeighbor = findNearestNeighbor(ptrInstanceArray, 2, query, &computeEuclideanDissimilarity);

	releaseInstance(query);
	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	free(ptrInstanceArray);

	return nearestNeighbor == -2;
}

int testFindNearestNeighborC() {
	Instance* ptrInstanceArray = calloc(2, sizeof(Instance));

	Instance* query = createInstance(4);
	query->featureTypes[0] = nominal;
	query->featureTypes[1] = nominal;
	query->featureTypes[2] = numerical;
	query->featureTypes[3] = numerical;

	Instance* ptrInstanceA = createInstance(4);
	ptrInstanceA->featureTypes[0] = nominal;
	ptrInstanceA->featureTypes[1] = nominal;
	ptrInstanceA->featureTypes[2] = numerical;
	ptrInstanceA->featureTypes[3] = numerical;

	Instance* ptrInstanceB = createInstance(4);
	ptrInstanceB->featureTypes[0] = nominal;
	ptrInstanceB->featureTypes[1] = numerical;
	ptrInstanceB->featureTypes[2] = numerical;
	ptrInstanceB->featureTypes[3] = numerical;

	ptrInstanceArray[0] = *ptrInstanceA; ptrInstanceArray[1] = *ptrInstanceB;

	int nearestNeighbor = findNearestNeighbor(ptrInstanceArray, 2, query, &computeEuclideanDissimilarity);

	releaseInstance(query);
	releaseInstance(ptrInstanceA);
	releaseInstance(ptrInstanceB);

	free(ptrInstanceArray);

	return nearestNeighbor == -3;
}


int main() {
	printf("Euclidean Dissimilarity Tests\n");
	printf("Test compute euclidean dissimilarity A: %d\n", testComputeEuclideanDissimilarityA());
	printf("Test compute euclidean dissimilarity B: %d\n", testComputeEuclideanDissimilarityB());
	printf("Test compute euclidean dissimilarity C: %d\n", testComputeEuclideanDissimilarityC());
	printf("Test compute euclidean dissimilarity D: %d\n", testComputeEuclideanDissimilarityD());

	printf("\nFind Nearest Neighbor Tests\n");
	printf("Test find nearest neighbor A: %d\n", testFindNearestNeighborA());
	printf("Test find nearest neighbor B: %d\n", testFindNearestNeighborB());
	printf("Test find nearest neighbor C: %d\n", testFindNearestNeighborC());

	return 0;
}