include <iostream>

int main(){
  // postfix
  value = 5;
  std::cout << "the value is (incrementing): " << value++ << std::endl;
  std::cout << "the value is: " << value << std::endl;
  
  std::cout << std::endl;
  
  std::cout << "the value is (decrementing): " << value-- << std::endl; 
  std::cout << "the value is: " << value << std::endl;


  // prefix
  value = 5;
  ++value;
  std::cout << "the value is (prefix++): " << value << std:endl; 
  value  = 5;
  std::cout << "the value is (prefix++ in place): " << ++value << std:endl;

  value = 5;
  --value;
  std::cout << "the value is (prefix--): " << value << std::endl;
  value = 5;
  std::cout << "the vallue is (prefix-- in place): " << --value << std::endl;

  
  return 0;
}
