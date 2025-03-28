#include <iostream>
#include "averageCalculator.h"
using namespace std;

//obtains an initially unknown number of numerical values for which it needs to calculate the average. 

/*forward declaration
float RSV(int numberOfValues)
float CA(int numberOfValues, float sum)
*/

int main() {
    cout << "Enter the number of values: "<<endl;
    
    int numberOfValues;
    cin >> numberOfValues;

    if (numberOfValues <= 0) {
        cout << "Number of values must be greater than 0." << endl;
        return 1;
    }

    float sum = RSV(numberOfValues);

    float avg = CA(numberOfValues, sum);

    cout<<"The average is: "<< avg <<endl;
}

/* 
float RSV(int numberOfValues) {
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
        return 0;
    }
    float result = sum / numberOfValues;
    return result;
}
    */
