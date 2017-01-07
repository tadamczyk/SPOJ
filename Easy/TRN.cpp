// TRN.cpp

#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int tab[m][n];
	for (int a=0; a<m; a++)
	{
		for (int b=0; b<n; b++)
		{
			cin>>tab[a][b];
		}
	}
	for (int b=0; b<n; b++)
	{
		for (int a=0; a<m; a++)
		{
			cout<<tab[a][b]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
