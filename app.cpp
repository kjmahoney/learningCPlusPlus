#include <iostream>

using namespace std;

int hello(string name)
{
  cout <<"Hello " + name;
  return 0;
}

int main()
{
  string x;
  cout <<"What is your name?";
  cin >> x;
  hello(x);

  return 0;
}
