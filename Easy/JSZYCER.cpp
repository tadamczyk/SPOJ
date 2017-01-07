// JSZYCER.cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string t,txt;
	do
	{
		getline(cin,t);
		txt+=t+'\n';
	}
	while (!t.empty());
	for (int a=0; a<txt.size(); a++)
	{
		int z=txt[a];
		if (z>=65 and z<=87) txt[a]=char(z+3);
		if (z>=88 and z<=90) txt[a]=char(z-23);
		cout<<txt[a];
	};
	return 0;
}
