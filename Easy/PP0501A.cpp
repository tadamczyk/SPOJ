// PP0501A.cpp

#include <iostream>
using namespace std;
int nwd(int a, int b)
{
	int temp;
	while (b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	cout<<a<<endl;
}
int main()
{
	int a,b,t;
	cin>>t;
	for (int x=0; x<t; x++)
	{
		cin>>a>>b;
		nwd(a,b);
	}
	return 0;
}
