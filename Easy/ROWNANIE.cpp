// ROWNANIE.cpp

#include <iostream>
using namespace std;
int main()
{
  long double a,b,c,wynik=0;
  while(cin>>a>>b>>c)
  {
    wynik=(b*b)-4*a*c;
    if (wynik>0) cout<<2<<endl;
    if (wynik==0) cout<<1<<endl;
    if (wynik<0) cout<<0<<endl;
  }
  return 0;
}
