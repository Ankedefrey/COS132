#include <iostream>

using namespace std;

int main() {
    string surname;
    char initial;
    char charArray[20];

    // Using getline() with max character limit (surname should not exceed 15 characters)
    cout << "Enter your surname (max 15 characters): ";
    getline(cin, surname, '\n'); // '\n' ensures it reads until newline
    if (surname.length() > 15) {
        cout << "Warning: Surname exceeds 15 characters. It may be truncated.\n";
    }

    // Using cin.get() to read a single character (initial)
    cout << "Enter your initial: ";
    cin.get(initial);

    // Clear the input buffer to prevent interference with next input
    cin.ignore();

    // Using cin.get(charArray, n) to read a string with spaces
    cout << "Enter your full name (max 19 characters): ";
    cin.get(charArray, 20); // Reads up to 19 characters + null terminator

    // Clear buffer again to handle remaining newline characters
    cin.ignore();

    // Using cin.read() to read exactly n characters
    char buffer[10];
    cout << "Enter any text (max 9 characters): ";
    cin.read(buffer, 9);
    buffer[cin.gcount()] = '\0'; // Null-terminate string

    // Display the captured inputs
    cout << "\n--- User Input Summary ---\n";
    cout << "Surname: " << surname << endl;
    cout << "Initial: " << initial << endl;
    cout << "Full Name: " << charArray << endl;
    cout << "Buffered Text: " << buffer << endl;

    return 0;
}
