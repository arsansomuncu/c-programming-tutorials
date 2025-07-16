#include <iostream>

int main(){

 int a {6};
 int b {3};
 int c {8};
 int d {9};
 int e {3};
 int f {2};
 int g {5};

 int result = a + b * c - d / e - f + g;
 std::cout << "result: " << result << std::endl;  
  
 result1 = a/b*c+d-e+f;
 std::cout << "result1: " << result1 << std::endl; 

 result2 = (a+b) * c - d / e -f + g;
 std::cout << "result2: " << result2 << std::endl; 

 return 0;
  
}
