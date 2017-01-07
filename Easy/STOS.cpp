// STOS.cpp

#include <iostream>
using namespace std;
int main()
{
  int tab[10],a=0,x;
  char z;
  while (cin>>z)
  {
    if (z=='+')
    {
      if (a<10) {cin>>tab[a]; cout<<":)"<<endl; a++; continue; }
      else {cin>>x; cout<<":("<<endl; continue; };
    };
    if (z=='-')
    {
      a--;
      if (a>=0) cout<<tab[a]<<endl;
      else {cout<<":("<<endl; a++; };
    };
  }
  return 0;
}
