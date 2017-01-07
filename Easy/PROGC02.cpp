// PROGC02.cpp

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  int tab[256]={0};
  unsigned char z;
  while (scanf("%c",&z)!=EOF)
  {
    tab[static_cast<int>(z)]++;
  }
  for (int b=0; b<256; b++)
  {
    if (tab[b]>0) cout<<b<<" "<<tab[b]<<endl;
  };
  return 0;
}
