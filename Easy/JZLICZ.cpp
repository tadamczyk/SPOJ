// JZLICZ.cpp

#include <iostream>
#include <string>
using namespace std;
void licz(string tekst, char znaki)
{
  unsigned int l=0;
  for (unsigned int a=0; a<=tekst.length()-1; a++)
    if (tekst[a]==znaki) l++;
  if (l!=0) cout<<znaki<<" "<<l<<endl;
}
int main()
{
  int t;
  cin>>t;
  string n,suma;
  t++;
  for (int a=0; a<t; a++)
  {
    getline(cin,n);
    suma+=n;
  }
  char tab[25];
  for (int i=97; i<=122; i++) tab[i]=i;
  for (int i=97; i<=122; i++) licz(suma,tab[i]);
  for (int i=65; i<=90; i++) tab[i]=i;
  for (int i=65; i<=90; i++) licz(suma,tab[i]);
  return 0;
}
