#include <iostream>
#include <cmath>

int main(){

int students = 20;
students += 1;
std:: cout << students << '\n';
students -= 1;
std:: cout << students << '\n';
students *= 2;
std:: cout << students << '\n';
students /= 2;
std:: cout << students << '\n';


double x = 3.99; 
double y = 4;
double z;

z = std::max(x,y);
z = std::min(x,y);

// z = pow(2,4)
// z = sqrt(9)
// z = abs(-3)
// z = round(x)
// z = floor(x)
// z = ceil(x)
  
return 0;

}
