// VSR.cpp

#include <iostream>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	for (int a=0; a<t; a++)
	{
		cin>>x>>y;
		cout<<(2*x*y)/(x+y)<<endl;
	}
	return 0;
}
