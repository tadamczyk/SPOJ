// MWPZ06A.cpp

#include <iostream>
#include <cmath>
using namespace std;
int t;
double x,y,z;
int main()
{
  ios::sync_with_stdio(0);
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>x>>y>>z;
    double m=0;
    m=(y*z-x-y)/(1-z);
    //cout.precision(2);
    //cout<<m<<endl;
    if (m<0) m*=-1;
    cout<<round(m*12)<<endl;
  }
  return 0;
}
