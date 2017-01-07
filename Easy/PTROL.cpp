// PTROL.cpp

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  int t,n,x,a=0,b=0,tab[100];
  scanf("%d",&t);
  for (a=0; a<t; a++)
  {
    scanf("%d",&n);
    for (b=0; b<n; b++)
    {
      scanf("%d",&x);
      tab[b]=x;
    }
    for (int b=1; b<n; b++)
    {
      cout<<tab[b]<<" ";
    }
    cout<<tab[0]<<" ";
  };
  return 0;
}
