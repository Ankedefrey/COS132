#include <iostream>
#include <string>

using namespace std;

string isEven(int val) {
    return(val % 2 == 0) ?
        "Value is even";
        "value is odd"
}

//nesting ternary operators
//function:char getNextChar( , )
string convertTIfs(string input){
    string result = " ";
    //some looping stucture
    {
        char nLetter = getNextChar(input);
        nLetter = 
            (nLetter =='0') ? 'A';
            (nLetter =='1') ? 'B';
            (nLetter =='2') ? 'C';
        result += nLetter;
    }
    return result;
}

//switch statements selection statement
string isEven(int n){
    string result = " ";
    switch(i % 2 == 0){
        case 0:
            result = "Value is even";
            break;
        case 1:
            result = "Value is odd";
            break;
        default:
            result = "Value is neither even nor odd";
    }
    return result;
}

//switch statements selection statement
string coverSwitch(string input){
    string result = " ";
        char nLetter = getNextChar(input);
        switch(nLetter){
            case 0:
                nLetter = 'A';
                break;
            case 1:
                nLetter = 'B';
                break;
            case 2:
                nLetter = 'C';
            default:
                nLetter = ' ';
        }
        result += nLetter;
}
return result;

//Selection if
string isEven(int n){
    if(n % 2 == 0){
        return "Value is even";
    }
    return "value is odd";
}

//Selection if else
string isEven(int n){
    if(n % 2 == 0){
        return "Value is even";
    }
    else{
        return "value is odd";
    }
}

//Selection if-else-if
string isEven(int n){
    if(n % 2 == 0){
        return "Value is even";
    }
    else if(n%2 != 0){
        return "value is odd";
    }
    return "Value is neither even nor odd";
}

//Example of converting binary to char
string convertElseIf(string input){
    string result = "";
    //some looping structure
    }



//Baby case build from this
void countToNumber(int n){
    for(int i=0; i<= n; i++){
         cout << i << endl;
    }
}

//Repetion statements for loops
string covertFor(string input){
    string result = " ";
    for(int i=0; i< input.length();i++){
        char nLetter = getNextChar(input);
        switch(nLetter){
            case 0:
                nLetter = 'A';
                break;
            case 1:
                nLetter = 'B';
                break;
            case 2:
                nLetter = 'C';
            default:
                nLetter = ' ';
        }
        result += nLetter;
    }
    return result;
}

//Repetition statements while loops
string covertFor(string input){
    string result = " ";
    int i = 0;
    while(i < input.length()){
        char nLetter = input[i];
        switch(nLetter){
            case 0:
                nLetter = 'A';
                break;
            case 1:
                nLetter = 'B';
                break;
            case 2:
                nLetter = 'C';
            default:
                nLetter = ' ';
        }
        result += nLetter;
        i++;
    }
    return result;
}

//repetition statements do-while loops
string covertFor(string input){
    string result = " ";
    int i = 0;
    do{
        char nLetter = input[i];

        if (nLetter){
            case 0:
                nLetter = 'A';
                break;
            case 1:
                nLetter = 'B';
                break;
            case 2:
                nLetter = 'C';
            default:
                nLetter = ' ';
        }
        result += nLetter;
        i++;
    }
    return result;
}

