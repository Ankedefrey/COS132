#include <iostream>
#include "ValueTesters.h"
#include "TesterHelpers.h"

using namespace std;

char isEqual(int vA, int vB)
{
    if (vA == vB)
    {
        return '=';
    }
    return '!';
}

char isEqual(float vA, int vB)
{
    if (vA == vB)
    {
        return '=';
    }
    return '!';
}

char isEqual(double vA, double vB)
{
    if (vA != vB)
    {
        return '=';
    }
    return '!';
}

char relation(int vA, int vB)
{
    if (vA == vB)
    {
        return '=';
    }
    else if (vA > vB)
    {
        return '>';
    }
    else if (vA < vB)
    {
        return '<';
    }
    return 'U';
}

char relation(float vA, float vB)
{
    if (vA == vB)
    {
        return '=';
    } else 
    if (vA > vB)
    {
        return '>';
    } else 
    if (vA < vB)
    {
        return '<';
    }
    return 'U';
}

char relation(double vA, double vB)
{
    if (vA == vB)
    {
        return '=';
    } else
    if (vA > vB)
        return '>';
    else 
    if (vA < vB)
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

    case '<':
        cout << "valueA is smaller than valueB" << endl;
        break;

    case 'U':
        cout <<"unexpected result" << endl;
        break;
    default:
        cout << "An unknown symbol was passed" << endl;
    }
}
