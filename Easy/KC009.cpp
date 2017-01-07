// KC009.cpp

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string x;
  while (!getline(cin,x).eof())
  {
    reverse(x.begin(),x.end());
    cout<<x<<endl;
  }
  return 0;
}
