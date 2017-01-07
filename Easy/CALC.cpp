// CALC.cpp

#include <iostream>
using namespace std;
int main()
{
  char znak;
  int a,b,suma;
  while(cin>>znak)
  {
    cin>>a>>b;
    switch(znak)
    {
    case '-':
      suma=a-b;
      break;
    case '+':
      suma=a+b;
      break;
    case '*':
      suma=a*b;
      break;
    case '/':
      suma=a/b;
      break;
    case '%':
      suma=a%b;
      break;
    }
    cout<<suma<<endl;
  };
  return 0;
}
