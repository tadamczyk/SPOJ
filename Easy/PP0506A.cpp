// PP0506A.cpp

#include <iostream>
#include <string>
using namespace std;
struct dane
{
  string naz;
  int x,y,p;
};
int main()
{
  int t,n;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>n;
    dane tab[n],temp[n];
    for (int b=0; b<n; b++)
    {
      cin>>tab[b].naz>>tab[b].x>>tab[b].y;
      tab[b].p=(tab[b].x*tab[b].x)+(tab[b].y*tab[b].y);
    }
    for (int x=n-1; x>0; x--)
    {
      for (int b=0; b<x; b++)
      {
        if (tab[b].p>tab[b+1].p) {temp[b]=tab[b]; tab[b]=tab[b+1]; tab[b+1]=temp[b]; };
      }
    }
    for (int b=0; b<n; b++)
    {
      cout<<tab[b].naz<<" "<<tab[b].x<<" "<<tab[b].y<<endl;
    }
  }
  return 0;
}
