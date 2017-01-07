// TABLICA.cpp

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i=0,tab[1000];
	while(cin>>tab[i])
	{
		i++;
	}
	while (i>0)
	{
		i--;
		cout<<tab[i]<<" ";
	}
	return 0;
}
