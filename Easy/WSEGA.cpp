// WSEGA.cpp

#include <iostream>
using namespace std;
int main()
{
  int t,n,x;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>n;
    int s=0;
    for (int b=0; b<n; b++)
    {
      cin>>x;
      s+=x;
    }
    if (n==1) {cout<<x<<endl; continue; }
    else {cout<<s+n-1<<endl; continue; };
  }
  return 0;
}
