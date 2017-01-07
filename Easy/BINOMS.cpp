// BINOMS.cpp

#include <iostream>
#include <cstdio>
using namespace std;
unsigned long long dwumiany(unsigned int n, unsigned int k)
{
  double wynik=1;
  for (unsigned int i=1; i<=k; i++)
  {
    wynik=wynik*(n-i+1)/i;
  }
  printf("%0.f",wynik);
  cout<<endl;
}
int main()
{
  unsigned int t,n,k;
  cin>>t;
  for (int i=0; i<t; i++)
  {
    cin>>n>>k;
    if (k==0 or k==n ) cout<<"1"<<endl;
    else dwumiany(n,k);
  };
  return 0;
}
