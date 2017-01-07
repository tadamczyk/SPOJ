// JHTMLLET.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a=0;
  string text,full;
  do
  {
    getline(cin,text);
    if (!text.empty()) full+=text+'\n';
  }
  while (!text.empty());
  do
  {
    if (full[a]=='<')
    {
      while (full[a]!='>')
      {full[a]=toupper(full[a]); a++; };
    };
    a++;
  }
  while (a<full.size());
  cout<<full;
  return 0;
}
