// JPESEL.cpp

#include <iostream>
using namespace std;
int main()
{
  int t,s=0;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    char x[11];
    //cin.getline(x,11);
    for (int b=0; b<11; b++) cin>>x[b];
    s=x[0]+x[1]*3+x[2]*7+x[3]*9+x[4]+x[5]*3+x[6]*7+x[7]*9+x[8]+x[9]*3+x[10];
    if (s%10==0) cout<<"D"<<endl;
    else cout<<"N"<<endl;
  }
  return 0;
}
