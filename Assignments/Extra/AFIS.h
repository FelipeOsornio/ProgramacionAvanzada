//
// Felipe Osornio - A01377154
// Fecha: 22/10/19
// Examen Parcial 2
//

typedef enum {
	numerical,
	nominal
} FeatureType;

typedef struct
{
	double* features;
	FeatureType* featureTypes;
	unsigned int length;
} Instance;

double computeEuclideanDissimilarity(const Instance* const ptrInstanceA, const Instance* const ptrInstanceB);

Instance* findNearestNeighbor(const Instance* const ptrInstance, const int length, const Instance* const query,
	double (*computeDissimilarity)(const Instance* const, const Instance* const));

int testComputeEuclideanDissimilarityA();
int testComputeEuclideanDissimilarityB();
int testComputeEuclideanDissimilarityC();
int testComputeEuclideanDissimilarityD();

int testFindNearestNeighborA();
int testFindNearestNeighborB();
int testFindNearestNeighborC();
int testFindNearestNeighborD();

