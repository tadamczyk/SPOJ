// KC015.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	string a,b,z;
	while (cin>>a>>z>>b)
	{
		int r=a.length()-b.length();
		if (r==0) r=a.compare(b);
		if(z=="==") cout<<(r==0)<<endl;
		else if(z=="!=") cout<<(r!=0)<<endl;
		else if(z=="<=") cout<<(r<=0)<<endl;
		else if(z==">=") cout<<(r>=0)<<endl;
	}
	return 0;
}
