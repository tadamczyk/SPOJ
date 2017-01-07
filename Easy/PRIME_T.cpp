// PRIME_T.cpp

#include <iostream>
using namespace std;
int main()
{
	int n,x,j,tab[10001];
	tab[1]=0;
	for (x=2; x<=10000; x++) tab[x]=1;
	for (x=2; x<=100; x++)
	{
		if (tab[x])
			for (j=x*x; j<=10000; j+=x) tab[j]=0;
	}
	cin>>n;
	while(n--)
	{
		cin>>x;
		if (tab[x]) cout<<"TAK"<<endl;
		else cout<<"NIE"<<endl;
	}
	return 0;
}
