// SYS.cpp

#include <iostream>
using namespace std;
int main()
{
  char tab[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  char elf[10],szehn[10];
  for (int a=0; a<10; a++) elf[a]=char(32);
  for (int a=0; a<10; a++) szehn[a]=char(32);
  int t,x;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>x;
    int x1=x;
    int k=0,l=0;
    while (x!=0)
    {
      int reszta=x%16;
      szehn[k]=tab[reszta];
      x=x/16;
      k++;
    }
    while (k>0)
    {
      k--;
      cout<<szehn[k];
    }
    cout<<" ";
    while (x1!=0)
    {
      int reszta=x1%11;
      elf[l]=tab[reszta];
      x1=x1/11;
      l++;
    }
    while (l>0)
    {
      l--;
      cout<<elf[l];
    }
    cout<<endl;
  }
  return 0;
}
