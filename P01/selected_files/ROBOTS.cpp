#include "ROBOTS.h"

using namespace std;

//This is provided for you
std::string ROBOTS::intToString(int v)
{
    std::stringstream ss;
    ss << v;
    std::string result;
    ss >> result;
    return result;
}

bool ROBOTS::task1(std::string input)
{
//TODO: Post the AI-generated code here
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9')))
        {
            return false;
        }
    }
    return true;
}

std::string ROBOTS::task2(std::string input)
{
//TODO: Post the AI-generated code here
    std::string result = "";
    for (size_t i = 0; i < input.length(); ++i)
    {
        int value = input[i] - 'A'; // Map character to numerical value
        result += intToString(value % 3); // Convert to base 3
    }
    return result;
}

std::string ROBOTS::task3(std::string input)
{
//TODO: Post the AI-generated code here
    std::string result = "";
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (input[i] == '0')
            result += "A";
        else if (input[i] == '1')
            result += "B";
        else if (input[i] == '2')
            result += "C";
    }
    return result;
}

std::string ROBOTS::task4(std::string input)
{
//TODO: Post the AI-generated code here
    std::string result = "";
    size_t i = 0;
    while (i < input.length())
    {
        char currentChar = input[i];
        size_t count = 1;
        while (i + 1 < input.length() && input[i + 1] == currentChar)
        {
            ++count;
            ++i;
        }
        result += intToString(count) + currentChar;
        ++i;
    }
    return result;
}


