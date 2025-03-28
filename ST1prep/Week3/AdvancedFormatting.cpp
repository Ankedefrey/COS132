#include <iostream>
#include <iomanip> // Required for setw and setprecision

using namespace std;

int main() {
    // Integer formatting
    int myInt = 123;
    cout << "Integer formatted with setw(10): '" << setw(10) << myInt << "'" << endl;

    // String formatting
    string myString = "Hello";
    cout << "String formatted with setw(20): '" << setw(20) << myString << "'" << endl;

    // Char formatting
    char myChar = 'A';
    cout << "Char formatted with setw(5): '" << setw(5) << myChar << "'" << endl;

    // Floating-point formatting
    double myDouble = 123.456789;
    cout << "Floating-point without formatting: " << myDouble << endl;

    cout << "Floating-point with setprecision(5): "
         << setprecision(5) << myDouble << endl;

    cout << "Floating-point with setprecision(9): "
         << setprecision(9) << myDouble << endl;

    cout << "Fixed floating-point with setprecision(3): "
         << fixed << setprecision(3) << myDouble << endl;

    // Resetting formatting
    cout.unsetf(ios::fixed);
    cout << "After resetting: " << myDouble << endl;

    return 0;
}

/*Integer formatted with setw(10): '       123'
String formatted with setw(20): '               Hello'
Char formatted with setw(5): '    A'
Floating-point without formatting: 123.457
Floating-point with setprecision(5): 123.46
Floating-point with setprecision(9): 123.456789
Fixed floating-point with setprecision(3): 123.457
After resetting: 123*/
