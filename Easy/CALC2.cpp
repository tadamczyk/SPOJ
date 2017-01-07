// CALC2.cpp

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	vector<int> wynik;
	char z;
	long int x,y,a=0;
	for (a=0; a<10; a++) wynik.push_back(0);
	while (scanf("%s %ld %ld",&z,&x,&y)!=EOF)
	{
		switch (z)
		{
		case 'z': wynik[x]=y;
			break;
		case '+': cout<<wynik[x]+wynik[y]<<endl;
			break;
		case '-': cout<<wynik[x]-wynik[y]<<endl;
			break;
		case '*': cout<<wynik[x]*wynik[y]<<endl;
			break;
		case '/': cout<<wynik[x]/wynik[y]<<endl;
			break;
		case '%': cout<<wynik[x]%wynik[y]<<endl;
			break;
		}
	}
	return 0;
}
