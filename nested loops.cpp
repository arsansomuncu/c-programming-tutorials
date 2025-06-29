#include <iostream>

int main(){

    int columns;
    int rows;
    char symbols;

    std:: cout << "how many columns?";
    std:: cin >> columns;
    
    std::cout << "how many rows?";
    std:: cin >> rows;
    
    std:: cout << "how many symbols?";
    std:: cin >> symbols;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std:: cout << symbols;
        }
        std:: cout << '\n';
    }

    return 0;
}
