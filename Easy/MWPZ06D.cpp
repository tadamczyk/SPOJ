// MWPZ06D.cpp

#include <iostream>
using namespace std;
int main()
{
  int d,l,c;
  cin>>d;
  for (int a=0; a<d; a++)
  {
    cin>>l>>c;
    l-=1;
    if (l==0) {cout<<"TAK"<<endl; continue; };
    if (l>c) {cout<<"TAK"<<endl; continue; };
    if (c%l!=0) {cout<<"TAK"<<endl; continue; };
    if (c%l==0) {cout<<"NIE"<<endl; continue; };
  }
  return 0;
}
