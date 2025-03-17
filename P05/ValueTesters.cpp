#include <iostream>
#include "ValueTesters.h"
#include "TesterHelpers.h"

using namespace std;

char isEqual(int valueA, int valueB) {
    if (valueA == valueB) {
        return '=';
    }
    return '!';
}

char isEqual(float valueA, float valueB)
{
    if (valueA == valueB)
    {
        return '=';
    }
    return '!';
}

char isEqual(double valueA, double valueB)
{
    if (valueA != valueB)
    {
        return '=';
    }
    return '!';
}

char relation(int valueA, int valueB)
{
    if (valueA == valueB)
    {
        return '=';
    }
    else if (valueA > valueB)
    {
        return '>';
    }
    else if (valueA < valueB)
    {
        return '<';
    }
    return 0;
}

char relation(float valueA, float valueB)
{
    if (valueA == valueB)
    {
        return '=';
    } else 
    if (valueA > valueB)
    {
        return '>';
    } else 
    if (valueA < valueB)
    {
        return '<';
    }
    return 'U';
}

char relation(double valueA, double valueB)
{
    if (valueA == valueB)
    {
        return '=';
    } else
    if (valueA > valueB)
        return '>';
    else 
    if (valueA < valueB)
        return '<';
    return 'U';
}

void printEqual(char symbol)
{
    switch (symbol)
    {
    case '=':
        cout << "The two values are equal" << endl;
        break;
    case '!':
        cout << "The two values are not equal" << endl;
        break;

    default:
        cout << "An unknown symbol was passed" << endl;
    }
}

void printRelation(char symbol)
{
    switch (symbol)
    {
    case '=':
        cout << "The two values are equal" << endl;
        break;

    case '>':
        cout << "valueA is bigger than valueB"<< endl;
        break;
    case '<':
        cout << "valueA is smaller than valueB" << endl;
        break;

    default:
        cout << "An unknown symbol was passed" << endl;
    }
}
