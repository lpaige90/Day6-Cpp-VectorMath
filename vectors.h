#ifndef VECTORS_H
#define VECTORS_H
#include <iostream>
#include <vector>
#include <string>
#include <math.h>

std::vector<double> addVectors(std::vector<double> x, std::vector<double> y);

std::vector<double> negativeVector(std::vector<double> v);

std::string displayVector(std::vector<double> v);

double vectorLength(std::vector<double> v);

std::vector<double> normalize(std::vector<double> v);

#endif