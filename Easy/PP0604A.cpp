// PP0604A.cpp

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t,n,x,w;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>n;
    double tab[n],suma=0,s=0,min=100;
    for (int b=0; b<n; b++)
    {
      cin>>x;
      tab[b]=x;
      suma+=x;
    }
    s=suma/n;
    for (int b=0; b<n; b++)
    {
      if(abs(tab[b]-s)<min)
      {
        min=abs(tab[b]-s);
        w=tab[b];
      }
    }
    cout<<w<<endl;
  }
  return 0;
}
