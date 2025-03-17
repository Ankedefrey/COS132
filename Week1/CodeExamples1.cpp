//Preprocessor Directives
    //Directives for the preprocessor
    //Interpreted before the compilation of the program itself.

//It expands macros, includes header files and preprosses conditional compilation
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main() {
    std::cout<<"Hello World!"<<std::endl;
    return 0;
}

//Using namespace std
    /*Allows for the organisation of code into logical groups and
    //prevents name collision, especially when your code base includes
    multiple libraries*/

    /*Tells the compiler to use the standard namespace
    std is the standard namespace that includes features such as I/O operations*/

#include <iostream>

using namespace std;

/*Main function*/
int main(){
    cout<<"Hello World!"<<endl;
    return 0;
}
