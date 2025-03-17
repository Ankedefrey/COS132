#include <iostream>
#include <string>
#include "TesterHelpers.h"
#include "ValueTesters.h"

int main() {
    std::cout<<isSame(5,5)<<std::endl;
    std::cout<<isDifferent(5,3)<<std::endl;

    printRelation(relation(5,3));
    printEqual(isEqual(5,5));

    std::cout << compareTo(5, 5) << std::endl;
    std::cout << compareTo(5, 3) << std::endl;
    std::cout << compareTo(3, 5) << std::endl;

    return 0;
}
