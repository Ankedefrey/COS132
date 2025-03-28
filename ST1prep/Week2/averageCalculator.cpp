#include "averageCalculator.h"
#include <iostream>

using namespace std;

float RSV(int numberOfValues) {
    if (numberOfValues < 0){
        cout << "Error: Number of values cannot be negative." <<endl;
        return 0;
    }
    int sum = 0;
    float nextValue;
    for (int i = 0; i < numberOfValues; i++){
        cout <<"Enter Value "<< (i+1) << ": ";
        cin >> nextValue;
        sum+=nextValue;
    }
    return sum;
}

//calculate average function
float CA(int numberOfValues, float sum) {
    //avoid division by zero
    if (numberOfValues == 0){ 
        cout << "Error: Cannot calculate average with 0 values"<<endl;
        return 0;
    }
    return sum / numberOfValues;
}
