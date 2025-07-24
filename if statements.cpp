#include <iostream>

int main(){

  int number1 = 55;
  int number2 = 60;

  bool result = (number1 < number2);
  std::cout << std::boolalpha << "result: " << result << std::endl;

  std::cout << std::endl;
  std::cout << "free standing if statement: " << std::endl;

  if(result == true){
    std::cout << number1 << "is less than" << number2 << std::endl;
  }
  if(!(result == true)){
    std::cout << number1 << "is not less than" << number2 << std::endl;
  }
  /* alternative 1 
   if(result == true){
   std::cout << number1 << "is less than" << number2 << std::endl;
   }
  else{
    std::cout << number1 << "is not less than" << number2 << std::endl;
   }
   return 0;

   alternative 2
  std::cout << std::endl;
  std::cout << "using expression as condition: " << std::endl;
  
  if(number1 < number2){
  std::cout << number1 << "is less than" << number2 << std::endl;
    }
  else{
    std::cout << number1 << "is not less than" << number2 << std::endl; */

  
/* nested if statements
  std::cout << std::endl;
  std::cout << "nesting if statements" << std::endl;

  bool red = false;
  bool green = true;
  bool yellow = false;
  bool police_stop = true;

  if(red){
    std::cout << "stop" << std::endl;
  }
  if(yellow){
    std::cout << "slow down" << std::endl; 
  }
  if(green){
    std::cout << "go" << std::endl;
  } */
  
/* std::cout << std::endl;
std::cout << "police officer stops(verbose)" << std::endl;  
if(green){
  if(police_stop){
    std::cout << "stop" << std::endl;
  }
  else{
    std::cout << "go" << std::endl;
  }
} */

  std::cout << std::endl;
  std::cout << "police officer stops (less verbose)" << std::endl;

  if(green && !police_stop){
    std::cout << "go" << std::endl;
   }
  else{
    std::cout << "stop" << std::endl;
  }

  
  return 0;
}
