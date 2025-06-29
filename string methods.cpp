# include <iostream>

int main() {

    std:: string name;
    
    std:: cout << "enter your name: ";
    std::getline(std::cin, name);
    
    //name.append("@gmail.com");
    //std:: cout << "your name is now" << name;
    //name.insert(0,"@");
    //std:: cout << name;
    //name.erase(0,3);
    //std:: cout << name.find(' ');

    if(name.length() > 12){
        std:: cout << "your name can't be over 12 characters";
    }

    else if(name.empty()){
        std:: cout << "you did not enter your name";
    }

    else {
        std:: cout << "welcome" << name;
    }

    return 0;
}
