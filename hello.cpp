// my first program in C++
#include <iostream>
using namespace std;


int main()
{
  int a=5;
  int b(3); //initial value of 3
  int c{2}; //initial value of 2
  int result;

  a = a + b +1;
  result = a - c;
  cout << result;

  return 0;
	
}
