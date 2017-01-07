// JSPACE.cpp

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main ()
{
  int a=0;
  string content,line;
  do
  {
    getline(cin,line);
    if (!line.empty()) content+=line+'\n';
  }
  while (!line.empty());
  do
  {
    content[0]=toupper(content[0]);
    if(content[a]==' ')
    {
      content.erase(a,1);
      content[a]=toupper(content[a]);
      continue;
    };
    a++;
  }
  while (a<content.size());
  cout<<content;
  return 0;
}
