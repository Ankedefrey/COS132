#include "AlgorithmConfiguration.h"
#include <iostream>

int START;
int END;
bool MOVETONEXT;
float AVERAGE;
float VALUE = 0.0f;

void printStart()
{
	std::cout << "START: " << START << std::endl;
}

void printEnd()
{
	std::cout <<"END: "<< END << std::endl;
}

void printMoveToNext()
{
	std::cout <<"MOVETONEXT: "<< MOVETONEXT << std::endl;
}

void printAverage()
{
	std::cout <<"AVERAGE: "<< AVERAGE << std::endl;
}

void printValue()
{
	std::cout <<"VALUE :"<< VALUE << std::endl;
}
