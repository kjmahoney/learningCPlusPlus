#include <iostream>
#include "hello.cpp"
#include "goodbye.cpp"

using namespace std;

int main()
{
  string name;

  cout <<"What is your name? ";
  cin >> name;

  hello(name);
  goodbye(name);

  return 0;
}
