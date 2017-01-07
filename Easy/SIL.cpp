// SIL.cpp

#include <iostream>
#include <algorithm>
using namespace std;
int X1,Y1,X2,Y2,X3,Y3,X4,Y4,licz;
int tab[600][600];
int main()
{
	ios::sync_with_stdio(0);
	cin>>X1>>Y1>>X2>>Y2>>X3>>Y3>>X4>>Y4;
	for (int a=X1; a<X2; a++)
	{
		for (int b=Y1; b<Y2; b++)
		{
			tab[a][b]++;
		}
	}
	for (int a=X3; a<X4; a++)
	{
		for (int b=Y3; b<Y4; b++)
		{
			tab[a][b]++;
		}
	}
	for (int a=0; a<600; a++)
	{
		for (int b=0; b<600; b++)
		{
			if (tab[a][b]==1) licz++;
			if (tab[a][b]==2) licz++;
		}
	}
	cout<<licz;
	return 0;
}
