//Type deduction: auto and decltype
#include<iostream>

using namespace std;

int main(){
  int foo = 10;
  auto bar = foo;  // the same as: int bar = foo; 
  cout << "value of bar : " << bar;

  decltype(foo) gar;  // the same as: int bar; 
  cout << "value of gar :  " << gar;
  return 0;
}
