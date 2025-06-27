#include <iostream>

int main(){
  bool sunny;

  int temp;
  std:: cout << "enter the temperature";
  std:: cin >> temp;

  if(0 <= temp || temp >= 30){
    std:: cout << "the temperature is bad";
  }
  else{
    std:: cout << "the temperature is good";
  }
  if (sunny){
    std:: cout << "it is sunny outside";
  }
  else{
    std:: cout << "it is cloudy outside";
  }
  // if(temp > 0 && temp < 30){
   // std:: cout << "the temperature is good";
  // }
  // else {
    // std:: cout << "the temperature is bad";
  //}
  
  // if(!sunny){
  // std:: cout << "it is cloudy outside";
//}
  // else {
   // std:: cout << "it is sunny outside";
  //}
  return 0;
}
