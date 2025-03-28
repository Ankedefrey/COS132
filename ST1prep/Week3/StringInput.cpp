#include <iostream>
#include <string>

int main(){
    std::string surname;
    char initial;

    std::cout<<"Type in your surname: ";
    std::getline(std::cin, surname);

    std::cout<<"Type in one of your first initials: ";
    std::cin>>initial;

    std::cout<<"Hello "<<initial<<" "<<surname<<std::endl;

    return 0;
}
