#include "vectors.h"

std::vector<double> addVectors(std::vector<double> x, std::vector<double> y) {
	if ( x.size() != y.size() ) {
		std::cout << "You cannot add vectors that do not have the same number of components.";
		exit (EXIT_FAILURE);
	} else {

		std::vector<double> result;

		for ( int i=0; i<x.size(); ++i ) {
			result.push_back(x.at(i) + y.at(i));
		}

		return result;
	}
}

std::vector<double> negativeVector(std::vector<double> v) {
	std::vector<double> result;

	for ( int i=0; i<v.size(); ++i ) {
		result.push_back(v.at(i) / (-1.0));
	}

	return result;
}

std::string displayVector(std::vector<double> v) {
	std::string result = "< ";

	for ( int i=0; i<v.size(); ++i ) {
		double component = v.at(i);
		result += std::to_string(component) + " ";
	}

	result += ">";

	return result;
}

double vectorLength(std::vector<double> v) {
	double length = 0;

	for ( int i=0; i<v.size(); ++i ) {
		double component;
		component = v.at(i);
		length += component*component;
	}

	length = sqrt (length);

	return length;
}

std::vector<double> normalize(std::vector<double> v) {
	std::vector<double> result;

	double length = vectorLength(v);

	if ( floor (length) == 0.0 && ceil (length) == 0.0) {
		std::cout << "You cannot normalize this vector." << std::endl;
		exit (EXIT_FAILURE);
	}

	for ( int i=0; i<v.size(); ++i ) {
		result.push_back(v.at(i) / length);
	}

	return result;
}