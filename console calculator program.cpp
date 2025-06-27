#include <iostream>

int main(){
  char op;
  double num1;
  double num2;
  double result;

  std:: cout << "enter either(+, -, *, /)";
  std:: cin >> op;
  
  std:: cout << "enter num1: ";
  std:: cin >> num1;

  std:: cout << "enter num2: ";
  std:: cin >> num2;
  
  switch(op){
    case '+':
    result = num1 + num2;
    std:: cout << "result: " << result << '\n' ;
    break;

    case '-':
    result = num1 - num2;
    std:: cout << "result: " << result << '\n';
    break;

    case '*':
    result = num1 * num2;
    std:: cout << "result: " << result << '\n';
    break;

    case '/';
    result = num1 / num2;
    std:: cout << "result: " << result << '\n';
    break;

    default:
    std:: cout << "that was not a valid response";
    break;

  
  }
  return 0;
}
