// PP0504B.cpp

#include <iostream>
#include <cstring>
#define T_SIZE 1001
using namespace std;
char* string_merge(char *s1, char *s2)
{
  int a=0;
  int dlugosc=0;
  if (strlen(s1)>strlen(s2)) dlugosc=2*strlen(s2)+1;
  if (strlen(s1)<strlen(s2)) dlugosc=2*strlen(s1)+1;
  if (strlen(s1)==strlen(s2)) dlugosc=2*strlen(s1)+1;
  char *wsk=new char[dlugosc];
  for(a=0; a<dlugosc; a++)
    if(a%2==0) wsk[a]=*s1++;
    else wsk[a]=*s2++;
  --a;
  wsk[a]=0;
  return wsk;
}
int main()
{
  int t;
  char S1[T_SIZE],S2[T_SIZE],*S;
  cin>>t;
  cin.getline(S1,T_SIZE);
  while(t)
  {
    cin.getline(S1,T_SIZE,' ');
    cin.getline(S2,T_SIZE);
    S=string_merge(S1,S2);
    cout<<S<<endl;
    delete[] S;
    t--;
  }
  return 0;
}
