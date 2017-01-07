// PTCLTZ.cpp

#include <iostream>
using namespace std;
int main()
{
  int t,s;
  cin>>t;
  for (t; t>0; t--)
  {
    cin>>s;
    if (s==1) {cout<<0<<endl; continue; };
    if (s==2) {cout<<1<<endl; continue; };
    int n=0;
    while (s!=1)
    {
      if (s%2==0) s=s/2;
      else s=3*s+1;
      n++;
    };
    cout<<n<<endl;
  };
  return 0;
}
