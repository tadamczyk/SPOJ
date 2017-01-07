// KC003.cpp

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double a,b,c;
	while (cin>>a>>b>>c)
	{
		double tab[3]={a,b,c};
		sort(tab,tab+3);
		if (tab[0]+tab[1]<=tab[2]) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}
