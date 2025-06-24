#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
vector<string> msg {"hello", "c++", "world"};

for (const string & word:msg){
  cout << word << '';
}
 cout << endl;
 return 0;
}
