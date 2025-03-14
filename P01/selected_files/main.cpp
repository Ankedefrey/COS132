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

int main()
{
	studentAlgorithm("!@#$%^&*()");
	studentAlgorithm("R2D2");    // Test Case 1: Valid input
	studentAlgorithm("C3PO");    // Test Case 2: Another valid input
	studentAlgorithm("BB8");     // Test Case 3: Another droid name
	studentAlgorithm("");        // Test Case 4: Empty string (edge case)
	studentAlgorithm("INVALID_NAME_123!");  // Test Case 5: Likely invalid input
	studentAlgorithm("1234");    // Test Case 6: Only numbers
	studentAlgorithm("ABZ9");    // Test Case 7: Upper boundary of valid characters
	studentAlgorithm("A1B2C3");  // Test Case 8: Mixed letters and numbers
	studentAlgorithm("r2d2");    // Test Case 9: Lowercase letters (invalid)
	studentAlgorithm("A!B@C#");  // Test Case 10: Special characters (invalid)
	studentAlgorithm(" ");       // Test Case 11: Whitespace-only string
	studentAlgorithm("AB1C2");
	studentAlgorithm("AReallyLongNameThatExceedsNormalLength");
	return 0;
}
