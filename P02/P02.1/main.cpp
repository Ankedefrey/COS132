#include <iostream>

#include "StatsInterface.h"
#include "StatsCalculator.h"

using namespace std;

int main(){
    STATSCALCULATOR::setFileName("studentData.txt");
    STATSCALCULATOR::processFile();

    printValueF("The average of the data points is: ", getAverageOfDataPoints());
    printValueF("The average of the data points is: ", getAverageOfDataPointsRev());
    printValueF("The sum of the data points is: ", sumDataPoints());
    printValueF("The reverse sum of the data points is: ", sumDataPointsRev());
    printValueB("2 is contained in the list of data points: ", isTheValueInTheListRev(2));
    printValueB("2 is contained in the list of data points: ", isTheValueInTheList(2));
    printValueS("The list contains: ", getListOfPointsInOrder());
    printValueS("The list contains: ", getPointsInReverseOrder());
    printValueF("The Standard deviation of the list in reverse is: ", getStandardDeviationRev());
    printValueF("The Standard deviation of the list is: ", getStandardDeviation());
    printStart();
    printEnd();
    printMoveToNext();
    printAverage();
    printValue();

}

/*
The expected output is: 
The average of the data points is: 7.75
2 is contained in the list of data points: 0
The list contains: 1 5 10 15 
START: 0
END: 3
*/
