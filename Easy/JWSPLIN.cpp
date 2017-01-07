// JWSPLIN.cpp

#include <iostream>
using namespace std;
double dziel(double a, double b) throw(string)
{
  if (b==0) {string wyjatek="TAK"; throw wyjatek; }
  return a/b;
}
int main()
{
  int t;
  double x1,y1,x2,y2,x3,y3,w1=0,w2=0;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double d1g=y2-y1,d1d=x2-x1,d2g=y3-y1,d2d=x3-x1;
    if (x1==y1==x2==y2==x3==y3) {cout<<"TAK"<<endl; continue; };
    try
    {
      w1=dziel(d1g,d1d);
      w2=dziel(d2g,d2d);
    }
    catch(string w)
    {
      cout<<w<<endl;
      continue;
    }
    if (w1==w2) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
  }
  return 0;
}
