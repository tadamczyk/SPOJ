// PROGC05.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	char z;
	string t;
	while (cin>>z>>t)
	{
		for (int a=0; a<t.length(); a++)
		{
			if (t[a]!=z) cout<<t[a];
		}
		cout<<endl;
	}
	return 0;
}
