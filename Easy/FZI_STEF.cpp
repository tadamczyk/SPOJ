// FZI_STEF.cpp

#include <iostream>
using namespace std;
long long int kadane(long long int tab[], int n)
{
	long long int max=0,j=0;
	for (int i=0; i<n; i++)
	{
		j=(j+tab[i]>0) ? j+tab[i] : 0;
		max=(j>max) ? j : max;
	}
	if (max<=0) return 0;
	else return max;
}
int main()
{
	int t;
	cin>>t;
	long long int tab[t];
	for (int a=0; a<t; a++)
	{
		cin>>tab[a];
	}
	cout<<kadane(tab,t);
	return 0;
}
