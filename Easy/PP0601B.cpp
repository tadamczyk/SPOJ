// PP0601B.cpp

#include <iostream>
using namespace std;
int main()
{
  int t,n,x,y;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>n>>x>>y;
    int b=1;
    while (b<n)
    {
      if (b%x==0 and b%y!=0) cout<<b<<" ";
      b++;
    }
    cout<<endl;
  }
  return 0;
}
