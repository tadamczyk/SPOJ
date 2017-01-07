// RNO_DOD.cpp

#include <iostream>
using namespace std;
int main()
{
  int t,n,x;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>n;
    int suma=0;
    for (int b=0; b<n; b++)
    {
      cin>>x;
      suma+=x;
    }
    cout<<suma<<endl;
  }
  return 0;
}
