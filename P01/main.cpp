#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "ROBOTS.h"

using namespace std;

void studentAlgorithm(const string& input)
{
    
    cout << "Enter droid name: " << input << endl;

    if (ROBOTS::task1(input))
    {
        cout << "Input was valid... progressing to next phase" << endl;
        string convertedInput = ROBOTS::task2(input);
        cout << "Converted: " << convertedInput << endl;
        string translatedInput = ROBOTS::task3(convertedInput);
        cout << "Translated: " << translatedInput << endl;
        string expandedInput = ROBOTS::task4(translatedInput);
        cout << "Expanded: " << expandedInput << endl;
    }
    else {
       cout << "Input was invalid... halting execution" << endl;
    }
}

int main(int argc, char const *argv[])
{
	studentAlgorithm("R2D2");
	studentAlgorithm("ABCDEFGHIJKLMNOPQRSTUWXYZ0123456789");
}
