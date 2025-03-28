#include <iostream>

using namespace std ;

bool isPositive(int num){
    cout<<"Checking if positive..."<<endl;
    return num > 0;
}

bool isEven(int num){
    cout<<"Checking if even..."<<endl;
    return num % 2 == 0;
}

int main() {
    int num1 = 2;
    if (isPositive(num1) && isEven(num1)) {
        cout<<"Number is both positive and even."<<endl; //True case always first
    }
    else {
        cout<<"Number is not both positive and even"<<endl;//False
    }

    int num2 = 3;
    if (isPositive(num2) && isEven(num2)) {
        cout<<"Number is both positive and even."<<endl;//True
    }
    else {
        cout<<"Number is not both positive and even"<<endl;//False
    }

    int num3 = 2;
    if (isPositive(num3) && isEven(num3)) {
        cout<<"Number is both positive and even."<<endl;//True
    }
    else {
        cout<<"Number is not both positive and even"<<endl;//False
    }
    return 0;
}
