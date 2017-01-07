// PP0602B.cpp

#include <iostream>
#include <algorithm>
using namespace std;
int t,l,k;
int tab[101][101];
int main()
{
  ios::sync_with_stdio(0);
  cin>>t;
  for(int a=0; a<t; a++)
  {
    cin>>l>>k;
    for(int b=0; b<l; b++)
    {
      for(int c=0; c<k; c++)
      {
        cin>>tab[b][c];
      }
    }
    int pierwszy_element=tab[0][0];
    int ostatnia_kolumna_2_wiersz=tab[1][k-1]; //l-2
    int ostatni_wiersz_pierwsza_kolumna=tab[l-1][0]; //l-2
    int ostatni_ostatni=tab[l-1][k-1];
    //int ostatni_wiersz_druga_kolumna=tab[l-1][0];

    for(int a=0; a<k-1; a++)
    {
      tab[0][a]=tab[0][a+1];
    }
    for(int a=l-1; a>1; a--)
    {
      tab[a][0]=tab[a-1][0];
    }
    for(int a=k-1; a>0; a--)
    {
      tab[l-1][a]=tab[l-1][a-1];
    }
    for(int a=0; a<l-1; a++)
    {
      tab[a][k-1]=tab[a+1][k-1];
    }
    tab[1][0]=pierwszy_element;
    tab[l-1][0]=ostatni_wiersz_pierwsza_kolumna;
    tab[0][k-1]=ostatnia_kolumna_2_wiersz;
    tab[l-2][k-1]=ostatni_ostatni;
    //tab[l-1][1]=ostatni_wiersz_druga_kolumna;
    swap(tab[l-1][0],tab[l-1][1]);
    for(int b=0; b<l; b++)
    {
      for(int c=0; c<k; c++)
      {
        cout<<tab[b][c]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
