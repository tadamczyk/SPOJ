// KC008.cpp

#include <iostream>
#include <vector>
using namespace std;
int main()
{
  long long x,s=0,w=0;
  vector<long long> t;
  while (cin>>x)
  {
    s+=x;
    if (x==0) {t.push_back(s); w+=s; s=0; continue; };
  }
  for (int a=0; a<t.size(); a++) cout<<t[a]<<endl;
  cout<<w;
  return 0;
}
