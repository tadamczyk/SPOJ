// MWPZ06H.cpp

#include <iostream>
#include <algorithm>
using namespace std;
int d,n;
int main()
{
  ios::sync_with_stdio(0);
  cin>>d;
  for (int a=0; a<d; a++)
  {
    cin>>n;
    int tab[n];
    for (int b=0; b<n; b++)
      cin>>tab[b];
    sort(tab,tab+n);
    int max=*max_element(tab,tab+n), ile_max=count(tab,tab+n,max);
    rotate(tab,tab+n-ile_max,tab+n);
    for (int b=0; b<n; b++)
      cout<<tab[b]<<" ";
    cout<<endl;
  }
  return 0;
}
