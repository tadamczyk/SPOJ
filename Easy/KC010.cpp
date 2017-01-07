// KC010.cpp

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string x;
  while (getline(cin,x))
  {
    istringstream iss(x);
    string t;
    int l=0,w=0;
    while (iss.good())
    {
      iss>>t;
      for (int a=0; a<t.length(); a++)
      {
        if(!isdigit(t[a]))
        {
          w++;
          l--;
          break;
        }
      }
      l++;
    }
    printf("%d %d\n",l,w);
  }
  return 0;
}
