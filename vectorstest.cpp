#include "vectors.h"

int main () {
	std::vector<double> vectorA = {1.5, 2.6, 4.8};
	std::vector<double> vectorB = {6.1, 1.3, 5};
	std::vector<double> vectorAminus;
	std::vector<double> vectorBminus;
	double lengthVectorA;
	double lengthVectorB;
	std::vector<double> normalizeA;
	std::vector<double> normalizeB;

	std::vector<double> sumAB = addVectors(vectorA, vectorB);

	vectorAminus = negativeVector(vectorA);
	vectorBminus = negativeVector(vectorB);

	std::vector<double> sumABminus = addVectors(vectorA, vectorBminus);
	std::vector<double> sumBAminus = addVectors(vectorB, vectorAminus);

	lengthVectorA = vectorLength(vectorA);
	lengthVectorB = vectorLength(vectorB);

	normalizeA = normalize(vectorA);
	normalizeB = normalize(vectorB);

	std::cout << "A + B = " << displayVector(sumAB) << std::endl;
	std::cout << "A - B = " << displayVector(sumABminus) << std::endl;
	std::cout << "B - A = " << displayVector(sumBAminus) << std::endl;

	std::cout << "Length of Vector A: " << lengthVectorA << std::endl;
	std::cout << "Length of Vector B: " << lengthVectorB << std::endl;

	std::cout << "Normalized Vector A: " << displayVector(normalizeA) << std::endl;
	std::cout << "Normalized Vector B: " << displayVector(normalizeB) << std::endl;

	return 0;
}