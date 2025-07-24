#include <iostream>
  // tools 
  const int pen = 10;
  const int marker = 20;
  const int eraser = 30;
  const int rectangle = 40;
  const int circle = 50;
  const int ellipse = 60;
 
int main(){
 
  int tool {circle};

  if(tool == pen){
    std::cout << "active tool is pen" << std::endl;
  }
  else if(tool = marker){
    std::cout << "active tool is marker" << std::endl;
  }
  else if(tool = eraser){
    std::cout << "active tool is eraser" << std::endl;
  }
 else if(tool = rectangle){
   std::cout << "active tool is rectangle" << std::endl;
 }
 else if(tool == circle){
   std::cout << "active tool is circle" << std::endl;
 }
 else if(tool == ellipse){
   std::cout << "active tool is ellipse" << std::endl;
 }

std::cout << "moving on" << std::endl;


  return 0;
}
