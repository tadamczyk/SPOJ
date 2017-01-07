// POL.cpp

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string tab;
  for(int a=0; a<t; a++)
  {
    cin>>tab;
    for(int b=0; b<=tab.length()/2-1; b++)
    {
      cout<<tab[b];
    }
    cout<<endl;
  }
  return 0;
}
