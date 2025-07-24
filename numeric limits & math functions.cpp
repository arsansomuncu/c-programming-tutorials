#include <iostream>
#include <limits>
#include <cmath>

int main(){
  
  // numeric limits
  std::cout << "the range for short is from" << std::numeric_limits<short>::min() << "to" <<
    std::numeric_limits<short>::max() << std::endl; 

  std::cout << "the range for unsigned short is from" << std::numeric_limits<unsigned_short>::min() << "to" <<
    std::numeric_limits<unsigned_short>::max() << std::endl;

  std::cout << "the range for int is from" << std::numeric_limits<int>::min() << "to" <<
    std::numeric_limits<int>::max() << std::endl;

  std::cout << "the range for unsigned int is from" << std::numeric_limits<unsigned_int>::min() << "to" <<
   std::numeric_limits<unsigned_int>::max() << std::endl;

  std::cout << "the range for long is from" << std::numeric_limits<long>::min() << "to" <<
    std::numeric_limits<long>::max() << std::endl;

  std::cout << "the range for float is from" << std::numeric_limits<float>::min() << "to" <<
    std::numeric_limits<float>::max() << std::endl;

  std::cout << "the range (with lowest) for double is from" << std::numeric_limits<double>::lowest() << "to" <<
   std::numeric_limits<double>::max() << std::endl;

  std::cout << "the range (with lowest) for long is from" << std::numeric_limits<long>::lowest() << "to" <<
    std::numeric_limits<long>::max() << std::endl;

  std::cout << "the range (with lowest) for float is from" << std::numeric_limits<float>::lowest() << "to" <<
    std::numeric_limits<float>::max() << std::endl; 

  // math functions

  double weight = 7.7;
  
  std::cout << "weight rounded to floor is: " << std::floor(weight) << std::endl; 
  std::cout << "weight rounded to ceil is: " << std::ceil(weight) << std::endl;

  double savings = -5000;
  std::cout << "abs weight of savings is: " << std::abs(weight) << std::endl;
  std::cout << "abs weight of weight is: " << std::abs(weight) << std::endl;

  double exponential = std::exp(10);
  std::cout << "the exponential of 10 is: " << exponential << std::endl;

  std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
  std::cout << "9 ^ 3 is " << std::pow(9,3) << std::endl;

  std::cout << "log; to get 54.59 you would elevate e to the power of: " << std::log(54.59) << std::endl; 
  std::cout << "log; to get 1000o you would elevate 10 to the power of: " << std::log10(10000) << std::endl;

  std::cout << "square root of 81 is: " << std::sqrt(81) << std::endl; 
  
  return 0; 
}



















