// PP0504D.cpp

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
void printfloat(float x)
{
  int i;
  for (i = sizeof x-1; i>=0; --i) printf("%x ",(((const unsigned char*)&x)[i]));
  printf("\n");
}
int main()
{
  int t;
  float x;
  scanf("%d",&t);
  while(t)
  {
    scanf("%f",&x);
    printfloat(x);
    t--;
  }
  return 0;
}
