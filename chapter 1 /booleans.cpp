#include <iostream>

int main(){

  bool red_light {true};
  bool green_light {false};

  if (red_light == true){
    std::cout << "stop!" << std::endl;
  }
  else{
    std:: cout << "go through!" << std::endl;
  }

  if(green_light){
    std::cout << "the light is green!" << std::endl;
  }
  else{
    std::cout "the light is not green!" << std::endl;
  }

  std:: cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "red_light" << red_light << std::endl;
  std::cout << "green_light" << green_light << std::endl;
  

  return 0;
}
