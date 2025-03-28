#include <iostream>

using namespace std;

int num1 = 10;
int main(){
    cout<<"Initial value num1: "<<num1<<endl;
    cout<<"Incrementing num, prefix: "<<++num1<<endl;
    int num3 = 12;
    cout<<"Incrementing num postfix: "<<num3++<<endl;

    int num2 = 10;
    cout<<"Initial value num1: "<<num2<<endl;
    cout<<"Decrementing num, prefix: "<<--num2<<endl;
    cout<<"Decrementing num, postfix: "<<num2--<<endl;
    return 0;
}
