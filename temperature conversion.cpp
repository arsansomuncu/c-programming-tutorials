#include <iostream>

int main(){

  double temp;
  char unit;
  std:: cout << "***** temprature conversion *****\n";
  std:: cout << "F = Fahrenheit\n";
  std:: cout << "c = Celcius\n";

  std:: cout << "what unit would you convert to: ";
  std:: cin << unit;

  
    if(unit == 'F' || unit == 'f'){
     std:: cout << "enter the temperature in celcius: ";
     std:: cin >> temp;
     
     temp = (temp * 1.8) + 32;
     std:: cout << "the temperature is :  " << temp << "F\n";
    }


    else if(unit == 'C' || unit == 'c'){
        std:: cout << "enter the temperature in fahrenheit: ";
        std:: cin >> temp;

        temp = (temp - 32) / 1.8;
        std:: cout << "the temperature is:  " << temp << "C\n";
    }

    else{
        std:: cout << "please only enter in C or F\n";
    }
    
    return 0;
}
