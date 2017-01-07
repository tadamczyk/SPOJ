// PRZEDSZK.cpp

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  int t,a,b;
  cin>>t;
  for (int i=0; i<t; i++)
  {
    scanf("%d %d",&a,&b);
    int x=a*b;
    for (int j=1; j<=x; j++)
    {
      if ((j%a==0)and (j%b==0)) {cout<<j<<endl; break; };
    }
  }
  return 0;
}
