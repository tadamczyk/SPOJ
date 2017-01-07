// JROWLIN.cpp

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	if (a!=0) printf("%.2f",(c-b)/a);
	if (a==0 and b==c) cout<<"NWR";
	if (a==0 and b!=c) cout<<"BR";
	return 0;
}
