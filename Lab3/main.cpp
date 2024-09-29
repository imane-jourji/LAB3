/*
	Imane Jourji
	Computer Science Fall 2024
	Due :Tuesday October 1, 2024 11:59pm
	Lab 3 : User and File I/O
	This lab's goal is to get you familiar output to the command prompt using C++
*/

#include <iostream>
#include <string>
#include "StatsCalc.h"                                            //To access the StatsCalc class and its methods
#include "fstream"


// Prototypes for input/output functions
int getInput(std::string nubName);
void printResults(float mean, float StandardDev);

int main()
{

	/*std::cout << " we need four numbers from you:" << std::endl;

	int number1 = getInput("first");
	int number2 = getInput("second");
	int number3 = getInput("third");
	int number4 = getInput("fourth");


	printNumber(number1);
	printNumber(number2);
	printNumber(number3);
	printNumber(number4);  */

	std::ifstream inFile;                                          // declare an input file stream (similar to cin)	
	inFile.open("inMeanStd.dat");                                  //open file for reading called input.dat
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;            // read from the file
	inFile.close();

	
	//Create a StatsCalc object
	StatsCalc statsCalc;
	float mean = statsCalc.mean(number1, number2, number3, number4);
	float standardDev = statsCalc.standardDev(number1, number2, number3, number4, mean);
	
	
	// Print results using printResults function
	printResults(mean, standardDev);

	
	// Write the result to an output file
	std::ofstream outFile;                                           // declare an output file stream (similar to cout)
	outFile.open("outMeanStd.dat");                                  //open file for writing called outMeanStd.dat
	outFile << "the mean of the numbers is : " << mean << std::endl; // write to the file 
	outFile << "the standard deviation is : " << standardDev << std::endl;
	outFile.close();                                                 // close the file 

	return 0;

}

// Definition of getInput function
int getInput(std::string nubName)
{
	std::cout << "please enter the " << nubName << "number: ";
	int input;
	std::cin >> input;
	return input;
}


// Definition of printResults function
void printResults(float mean, float standardDev)
{
	std::cout << "the mean of the numbers is: " << mean << std::endl;
	std::cout << "the standard deviation is: " << standardDev << std::endl;
}

// Definition of printNumber function if we used the user inputted values 
void printNumber(int number)
{
	std::cout << "You entered: " << number << std::endl;
}
