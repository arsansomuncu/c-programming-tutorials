#include <iostream>  
#include <iomanip>
#include <ios>


int main(){
  
 // setw
 std::cout << std::setw(10) << "lastname" << std::setw(10) << "firstname" << std::setw(5) << "age" << std::endl; 
 std::cout << std::setw(10) << "daniel" << std::setw(10) << "gray" << std::setw(5) << "25" << std::endl;
 std::cout << std::setw(10) << "stanley" << std::setw(10) << "woods" << std::setw(5) << "33" << std::endl;
 std::cout << std::setw(10) << "jordan" << std::setw(10) << "parker" << std::setw(5) << "45" << std::endl;
 std::cout << std::setw(10) << "joe" << std::setw(10) << "ball" << std::setw(5) << "21" << std::endl;
 std::cout << std::setw(10) << "jash" << std::setw(10) << "carr" << std::setw(5) << "27" << std::endl;
 std::cout << std::setw(10) << "izaeah" << std::setw(10) << "robinson" << std::setw(5) << "29" << std::endl;

 std:cout << std::endl;
 std::cout << "formatted table ith variables" << std::endl;

 int col_width{14};

 std::cout << std::setw(col_width) << "lastname" << std::setw(col_width) << "firstname" << std::setw(col_width / 2) << "age" << std::endl;
 std::cout << std::setw(col_width) << "daniel" << std::setw(col_width) << "gray" << std::setw(col_width / 2) << "25" << std::endl;
 std::cout << std::setw(col_width) << "stanley" << std::setw(col_width) << "woods" << std::setw(col_width / 2) << "33" << std::endl;
 std::cout << std::setw(col_width) << "jordan" << std::setw(col_width) << "parker" << std::setw(col_width / 2) << "45" << std::endl;
 std::cout << std::setw(col_width) << "joe"  << std::setw(col_width) << "ball" << std::setw(col_width / 2) << "21" << std::endl;
 std::cout << std::setw(col_width) << "jash" << std::setw(col_width) << "carr" << std::setw(col_width / 2) << "27" << std::endl;
 std::cout << std::setw(col_width) << "izeah" << std::setw(col_width) << "robinson" << std::setw(col_width / 2) << "29" << std::endl;

 std::cout << std::endl;

 // setfill
 std::cout << "table with fill characters" << std::endl;

 col_width = 20;
 std::cout << std::left;

 std::cout << std::setfill(*);

 std::cout << std::setw(col_width) << "lastname" << std::setw(col_width) << "firstname" << std::setw(col_width / 2) << "age" << std::endl;
 std::cout << std::setw(col_width) << "daniel" << std::setw(col_width) << "gray" << std::setw(col_width / 2) << "25" << std::endl;
 std::cout << std::setw(col_width) << "stanley" << std::setw(col_width) << "woods" << std::setw(col_width / 2) << "33" << std::endl;
 std::cout << std::setw(col_width) << "jordan" << std::setw(col_width) << "parker" << std::setw(col_width / 2) << "45" << std::endl;
 std::cout << std::setw(col_width) << "joe"  << std::setw(col_width) << "ball" << std::setw(col_width / 2) << "21" << std::endl;
 std::cout << std::setw(col_width) << "jash" << std::setw(col_width) << "carr" << std::setw(col_width / 2) << "27" << std::endl;
 std::cout << std::setw(col_width) << "izeah" << std::setw(col_width) << "robinson" << std::setw(col_width / 2) << "29" << std::endl;

 std::cout << std::endl;

 //boolalpha & noboolalpha
 bool condition = true;
 bool other_condition = false;

 std::cout << "condition: " << condition << std::endl;
 std::cout << "other condition: " << other_condition << std::endl;

 std::cout << std::endl;
 std::cout << std::boolalpha;
 
 std::cout << "condition: " << condition << std::endl;
 std::cout << "other condition: " << other_condition << std::endl;

 std::cout << std::endl;
 std::cout << std::noboolalpha;

 std::cout << "condition: " << condition << std::endl;
 std::cout << "other condition: " << other_condition << std::endl;

 std::cout << std::endl;


//showpos & noshowpos
int pos_int = 34;
int neg_int = -45;

double double_var = 498.32;
std::cout << std::endl;

std::cout << "default base format" << std::endl;
std::cout << "pos_int: " << pos_int << std::endl;
std::cout << "neg_int: " << neg_int << std::endl;
std::cout << "double_var: " << double_var << std:endl;

std::cout << "pos_int in different bases" << std::endl;
std::cout << "pos_int: " << pos_int << std::endl;
std::cout << "neg_int: " << neg_int << std::endl;
std::cout << "double_var: " << double_var << std:endl;
  

std::cout << "neg_int in different bases" << std::endl;
std::cout << "pos_int: " << pos_int << std::endl;
std::cout << "neg_int: " << neg_int << std::endl;
std::cout << "double_var: " << double_var << std:endl;


std::cout << "double_var in different bases" << std::endl;
std::cout << "pos_int: " << pos_int << std::endl;
std::cout << "neg_int: " << neg_int << std::endl;
std::cout << "double_var: " << double_var << std:endl;

std::cout << std::endl;

  




























  
 
 


  return 0;
}
