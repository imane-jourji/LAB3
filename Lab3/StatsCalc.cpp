#include "StatsCalc.h"             // To define the methods declared in StatsCalc class
#include <cmath>    

float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4) {
	calcMean = (x1 + x2 + x3 + x4) / meanD;
	return calcMean;               // calcMean is used here to store the result
}

float StatsCalc::standardDev(int x1, int x2, int x3, int x4, float mean) {
	calcStandardDev = std::sqrt(
		(pow(x1 - mean, 2) + pow(x2 - mean, 2) + pow(x3 - mean, 2) + pow(x4 - mean, 2)) / 4.0f
	);
	return calcStandardDev;
}