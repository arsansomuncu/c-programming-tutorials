#include <iostream>

int main(){

    std::string name;
    int number;

    while(name.empty()){
       std:: cout << "enter your name: ";
       std::getline(std::cin, name);
    }
    
    do {
        std::cout << "enter a positive#: ";
        std:: cin >> number;
    }
    while(number < 0);

    std:: cout << "the number is# : " << number;
    std::cout << "hello" << name;

    return 0;
}
