#include "StatsInterface.h"
#include "AlgorithmConfiguration.h"
#include <iostream>
#include <string>

float sumDataPoints()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:

    MOVETONEXT = true;
    START = 0;
    END = STATSCALCULATOR::getPositionOfLastDataPoint();

    // Do not alter line below:
    return STATSCALCULATOR::sumDataPoints();
}

float sumDataPointsRev()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    MOVETONEXT = false;
    START = STATSCALCULATOR::getPositionOfLastDataPoint();
    END = 0;

    // Do not alter line below:
    return STATSCALCULATOR::sumDataPoints();
}

float getAverageOfDataPoints()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    MOVETONEXT = true;
    START = 0;
    END = STATSCALCULATOR::getPositionOfLastDataPoint();

    // Do not alter line below:
    return STATSCALCULATOR::average();
}

float getAverageOfDataPointsRev()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    MOVETONEXT = false;
    START = STATSCALCULATOR::getPositionOfLastDataPoint();
    END = 0;
    // Do not alter line below:
    return STATSCALCULATOR::average();
}

float getStandardDeviation()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
       

    // Do not alter line below:
    return STATSCALCULATOR::standardDiv();
}

float getStandardDeviationRev()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this

    // Do not alter line below:
    return STATSCALCULATOR::standardDiv();
}

std::string getListOfPointsInOrder()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    
}

std::string getPointsInReverseOrder()
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:

    // Do not alter line below:
    return STATSCALCULATOR::getPointsInOrder(true);
}

bool isTheValueInTheList(float value)
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    

    // Do not alter line below:
    return STATSCALCULATOR::isValueInList(value);
}

bool isTheValueInTheListRev(float value)
{
    STATSCALCULATOR::processFile();
    // Initialise variables below this:
    MOVETONEXT = false;
    // Do not alter line below:
    return STATSCALCULATOR::isValueInList(value);
}

void printValueF(std::string message, float value)
{
    std::cout << message << value << std::endl;
}

void printValueS(std::string message, std::string value)
{
    std::cout << message << value << std::endl;
}

void printValueB(std::string message, bool value)
{
    std::cout << message << value << std::endl;
}
