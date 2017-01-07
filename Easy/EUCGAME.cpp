// EUCGAME.cpp

#include <iostream>
using namespace std;
int main()
{
  int t=0,tab[t];
  long int a=0,b=0;
  cin>>t;
  if (t>10) return 0;
  if ((t>0) && (t<=10))
    while (t>0)
    {
      t--;
      cin>>a>>b;
      while (a!=b)
      {
        if (a>b) a=a-b;
        else b=b-a;
      }
      tab[t]=a+b;
      cout<<tab[t]<<endl;
    }
  return 0;
}
