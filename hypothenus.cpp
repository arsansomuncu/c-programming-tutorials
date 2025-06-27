#include <iostream>
#include <cmath>

int main () {

double a;
double b;
double c;

std:: cout << "enter the side a: " ;
std:: cin >> a;
  
std:: cout << "enter the side b: ";
std:: cin >> b;
  
a = pow(a,2);
b = pow(b,2);
c = sqrt(a+b);

std:: cout << "side c: " << c;

return 0;
}
