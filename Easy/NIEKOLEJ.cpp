// NIEKOLEJ.cpp

#include <iostream>
using namespace std;
int main()
{
  int n,x;
  cin>>n;
  x=n;
  if (n==0) cout<<0;
  if (n==1 or n==2) cout<<"NIE";
  if (n%2!=0 and n>2)
  {
    cout<<n-x/2<<" ";
    for (int a=0; a<x/2; a++)
      cout<<a<<" "<<n-a<<" ";
    cout<<(n-x/2)-1;
  };
  if (n%2==0 and n>2)
  {
    cout<<n-x/2<<" ";
    for (int a=0; a<x/2; a++)
      cout<<a<<" "<<n-a<<" ";
  }
  return 0;
}
