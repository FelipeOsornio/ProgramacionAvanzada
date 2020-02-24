typedef enum {
	numerical,
	nominal
} FeatureType;


typedef struct Instance {
	double* features;
	FeatureType* featureTypes;
	int length;
}Instance;

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


