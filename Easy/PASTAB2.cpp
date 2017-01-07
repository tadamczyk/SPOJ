// PASTAB2.cpp

#include <iostream>
using namespace std;
int n,x;
char z;
int main()
{
	ios::sync_with_stdio(0);
	cin>>n;
	int tab[n];
	for (int a=0; a<n; a++)
	{
		cin>>tab[a];
	}
	cin>>z>>x;
	if (z=='<')
	{
		for (int a=0; a<n; a++)
		{
			if (tab[a]<x) cout<<tab[a]<<endl;
		}
	}
	if (z=='>')
	{
		for (int a=0; a<n; a++)
		{
			if (tab[a]>x) cout<<tab[a]<<endl;
		}
	}
	return 0;
}
