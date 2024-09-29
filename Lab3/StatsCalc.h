#ifndef STATSCALC_H
#define STATSCALC_H


class StatsCalc
{
public:
	StatsCalc() {}
	~StatsCalc() {};
	
	// Methode to calculate the mean 
	float mean(int x1, int x2, int x3, int  x4);

	// Method to calculate population standard deviation
	float standardDev(int x1, int x2, int x3, int x4, float mean);

private:
	float calcMean = 0.0f;   // Private variable to store the calculated mean
	float calcStandardDev;   // Private variable to store the calculated standard deviation          

};
#endif                       //!STATSCALC_H
