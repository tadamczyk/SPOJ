// FANGEN.cpp

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double r;
  while (r!=0)
  {
    cin>>r;
    int n=2*abs(r);
    char tab[n][n];
    if (r>0)
    {
      int x=1,y=1,z=r;
      for (int a=0; a<r; a++)
      {
        for (int b=0; b<r; b++)
        {
          if (x==0) {tab[a][b]=char(46); cout<<tab[a][b]; continue; };
          if (x!=0) {tab[a][b]=char(42); cout<<tab[a][b]; };
          x--;
        }
        x=z;
        for (int b=r; b<n; b++)
        {
          if (x==0) {tab[a][b]=char(46); cout<<tab[a][b]; continue; };
          if (x!=0) {tab[a][b]=char(42); cout<<tab[a][b]; };
          x--;
        }
        cout<<endl;
        y++;
        z--;
        x=y;
      }
      for (int a=0; a<r; a++)
      {
        for (int b=r-1; b>=0; b--)
        {
          cout<<tab[a][b];
        }
        for (int b=n-1; b>=r; b--)
        {
          cout<<tab[a][b];
        }
        cout<<endl;
      }
    }
    if (r<0)
    {
      int x=0,y=0,z=r+1;
      for (int a=0; a<abs(r); a++)
      {
        for (int b=0; b<abs(r); b++)
        {
          if (x<0) {tab[a][b]=char(46); cout<<tab[a][b]; };
          if (x>=0) {tab[a][b]=char(42); cout<<tab[a][b]; };
          x++;
        }
        x=z;
        for (int b=abs(r); b<n; b++)
        {
          if (x<0) {tab[a][b]=char(46); cout<<tab[a][b]; };
          if (x>=0) {tab[a][b]=char(42); cout<<tab[a][b]; };
          x++;
        }
        cout<<endl;
        y--;
        z++;
        x=y;
      }
      for (int a=0; a<abs(r); a++)
      {
        for (int b=abs(r)-1; b>=0; b--)
        {
          cout<<tab[a][b];
        }
        for (int b=n-1; b>=abs(r); b--)
        {
          cout<<tab[a][b];
        }
        cout<<endl;
      }
    }
  }
  return 0;
}
