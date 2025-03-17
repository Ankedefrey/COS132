#include "TesterHelpers.h"

void passedPrinter(int expected, int received) {
    // print
    //Value <<receive >> was same as expected value of <<expected >>$
    std::cout<<"Value"<< received << "was same as expected value of" <<expected<< std::endl;
}

void failedPrinter(int expected, int received) {
    //print
    //Value <<receive >> was not the same as expected value of <<expected >>$
    std::cout<<"Value"<< received << "was not the same as expected value of" <<expected<< std::endl;
}

bool isSame(int expected, int received) {
    //determine if two inputs are the same or not
    //if input 1 = input 2
        //call passedPrinter function and return true
    if (expected == received){
        return isSame(expected, received);
    }
    else {
        return failedPrinter(expected, received);
    }
    //else
        //call failedPrinter function and return false
}

bool isDifferent(int expected, int received) {
    //determine if two inputs are different or not
    //if input 1 = input 2
        //call passedPrinter and return false
    //else 
        //call failedPrinter and return true
}

//Note to self: These two functions above could most probs be that inverse thing where you use 'not'

int compareTo(int expected, int received) {
    //decribe how the values differ in a bit more detail
    //note  DIFFER!
    //See logic in pdf
        //basically: 
            //when x=y, functions equal to each other f(x,y)=0
            //when x>y, function 1 bigger than function 2 f(x,y)=1
            //when x<y, function 1 smaller than function 2 f(x,y)=-1

}
