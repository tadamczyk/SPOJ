// SKARBFI.cpp

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int tests,tips,x,y,a,b;
  cin>>tests;
  while (tests)
  {
    x=0;
    y=0;
    cin>>tips;
    while (tips)
    {
      cin>>a>>b;
      switch (a)
      {
      case 0: y=y+b; break;
      case 1: y=y-b; break;
      case 2: x=x-b; break;
      case 3: x=x+b; break;
      }
      tips--;
    }
    if (x==0 and y==0) {cout<<"studnia"<<endl; }
    else
    {
      if (x==0)
      {
        if (y>0) cout<<0<<" "<<abs(y);
        else cout<<1<<" "<<abs(y);
      }
      else if (y==0)
      {
        if (x>0) cout<<3<<" "<<abs(x);
        else cout<<2<<" "<<abs(x);
      }
      else
      {
        if (y>0) cout<<0<<" "<<abs(y);
        else cout<<1<<" "<<abs(y);
        cout<<endl;
        if (x>0) cout<<3<<" "<<abs(x);
        else cout<<2<<" "<<abs(x);
      }
      if (tests>1) cout<<endl;
    }
    tests--;
  }
  return 0;
}
