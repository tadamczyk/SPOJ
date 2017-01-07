// PP0601A2.cpp

#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int x,a=0,licz=0;
  vector<int> tab;
  do
  {
    cin>>x;
    tab.push_back(x);
    cout<<x<<endl;
    if (tab[a]==42 and tab[a-1]!=42 and a>0) licz++;
    a++;
  }
  while (licz<3);
  return 0;
}
