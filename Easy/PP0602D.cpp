// PP0602D.cpp

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n>>k;
	int tab[n];
	for (int a=0; a<n; a++)
	{
		cin>>x;
		tab[a]=x;
	}
	rotate(tab,tab+k,tab+n);
	for (int a=0; a<n; a++)
		cout<<tab[a]<<" ";
	return 0;
}
