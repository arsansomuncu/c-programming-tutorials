include <iostream>

int main(){
  
  int number1 = 45;
  int number2 = 60;
  
  std::cout << "number 1: " << number1 << std::endl;
  std::cout << "number 2: " << number2 << std::endl;

  std::cout << std::endl;
  std::cout << "comparing variables" << std::endl;
  std::cout << std::boolalpha;

  std::cout <<  "number1 < number2" << (number1 < number2) << std::endl;
  std::cout <<  "number1 <= number2" << (number1 <= number2) << std::endl;
  std::cout <<  "number1 > number2" << (number1 > number2) << std::endl;
  std::cout <<  "number1 >= number2" << (number1 >= number2) << std::endl;
  std::cout <<  "number1 == number2" << (number1 == number2) << std::endl;
  std::cout <<  "number1 =! number2" << (number1 =! number2) << std::endl;

  std::cout << std::endl;
  std::cout << "store comparison reuslt and use it later" << std::endl;

  bool result (number1 == number2);
  std::cout << "number1 " << "==" << "number2" << ":" << result << std::endl;

  bool a  = true;
  bool b = false;
  bool c = true;

  std::cout << std::boolalpha;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  std:cout << std:endl;
  std::cout << "basic and operators" << std::endl;

  std::cout << "a && b: " << (a && b) << std::endl;
  std::cout << "a && c: " << (a && c) << std::endl;
  std::cout << "b && c: " << (b && c) << std::endl;
  std::cout << " a && b && c: " << (a && b && c) << std::endl;

  std::cout << std::endl;
  std::cout << "basic or operators" << std::endl;

  std::cout << " a || b: " << a || b << std::endl;
  std::cout << " a || c: " << a || c << std::endl;
  std::cout << " b || c: " << b || c << std::endl;
  std::cout << " a || b || c: " << a || b || c << std::endl;

  std::cout << std::endl;
  std::cout << "basic not operators" << std::endl;

  std::cout << "!a: " << !a << std::endl;
  std::cout << "!b: " << !b << std::endl; 
  std::cout << "!c: " << !c << std::endl;

  std::cout << std::endl;
  std::cout << "combining logical operators" << std::endl;

  std::cout << " !( a && b ) || c: " << !(a && b) ||c << std::endl;

  int d = 45;
  int e = 20;
  int f = 11;
  
  std::cout << std::endl;
  sd::cout << "reltional and logical operators on integers" << std:endl;
  
  std::cout << "d: " << d << std::endl;   
  std::cout << "e: " << e << std::endl;
  std::cout << "f: " << f << std::endl;

  std::cout << "(d > e) && (d > f): " << (d > e) && (d > f) << std::endl;
  std::cout << "(d == e) || (e <= f): " << (d == e) || (e <= f) << std::endl; 
  std::cout << "(d < e) || (d > f): " << (d < e) || (d > f) << std::endl;
  std::cout << "(f > e) || (d < f): " << (f > e) || (d < f) << std:endl;
  std::cout << "(d > f) && (f <= d): " << (d > f) && (f <= d) << std::endl;  
  std::cout << "(d > e) && (d <= f): " << (d > e) && (d <= f) << std::endl;
  std::cout << "(!a) && (d == e): " << (!a) && (d == e) << std::endl; 


  return 0;
}
