#include <iostream>

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};
    
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;
    
    
    float number4 (19400023);
    number4 += 1;
    std::cout << "number4 is: " << number4 << std::endl;
    
    
    double number5 {5.26};
    double number6 {};
    double number7 {};
    
    double result1 (number5 / number6);
    double result = number6 / number7;
    
    std::cout << number5 << "/" << number6 << "yields" << result1 << std::endl; 
    std::cout << number6 << "/" << number7 << "yields" << result << std::endl;


return 0;
}
