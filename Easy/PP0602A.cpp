// PP0602A.cpp

#include <iostream>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	for (int a=0; a<t; a++)
	{
		cin>>n;
		int tab[n];
		for (int b=0; b<n; b++)
		{
			cin>>x;
			tab[b]=x;
		}
		for (int b=1; b<n; b=b+2)
		{
			cout<<tab[b]<<" ";
		}
		for (int b=0; b<n; b=b+2)
		{
			cout<<tab[b]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
