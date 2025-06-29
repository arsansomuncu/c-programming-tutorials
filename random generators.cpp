#include <iostream>
#include <ctime>

int main(){
  
    // number generator
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand()% 6) + 1;
    int num3 = (rand() % 6) + 1;

    int num = rand();
    std::cout << num1 << '\n';
    std:: cout << num2 << '\n';
    std:: cout << num3 << '\n';


    // event generator
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum){

        case 1: std:: cout << "you win a bumper ticket" << '\n';
                break; 
        case 2: std:: cout << "you win a t-shirt" << '\n';
                break;
        case 3: std:: cout << "you win a free lunch" << '\n';
                break;
        case 4: std:: cout << "you win a gift card" << '\n';
                break;
        case 5: std:: cout << "you win a concert ticket" << '\n';
                break;
    }

    return 0;
}
