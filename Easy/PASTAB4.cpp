// PASTAB4.cpp

#include <iostream>
#include <cmath>
using namespace std;
int numbers[21];
int main()
{
  ios::sync_with_stdio(0);
  const int width=30;
  int max=0,number;
  while(cin>>number)
  {
    ++numbers[number+10];
    if (numbers[number+10]>max)
    {
      max=numbers[number+10];
    }
  }
  if (max)
  {
    for (int i=0; i<21; ++i)
    {
      float starNumber=round((width*numbers[i]/(float)max));
      float spaceNumber=(float)width-starNumber;
      if (i-10>=0 and i-10!=10) {cout<<"  "; }
      else if (i-10<0 and i!=0 or i==20) {cout<<" "; }
      cout<<i-10<<":|";
      for (int j=0; j<starNumber; ++j)
      {
        cout<<"*";
      }
      for (int j=0; j<spaceNumber; ++j)
      {
        cout<<" ";
      }
      cout<<"|"<<endl;
    }
  }
  return 0;
}
