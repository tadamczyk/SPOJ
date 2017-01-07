// PROGC01.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  int l=0;
  while (getline(cin,s))
  {
    l++;
  }
  cout<<l;
  return 0;
}
