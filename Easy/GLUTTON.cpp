// GLUTTON.cpp

#include <iostream>
#include <cstdio>
#define DZIEN 86400
using namespace std;
int main()
{
	int n,osoby,ciastka,cookies,a,b,wynik,time[10000];
	scanf("%d", &n);
	for (a=0; a<n; a++)
	{
		cookies=0;
		scanf("%d %d", &osoby, &ciastka);
		for (b=0; b<osoby; b++) scanf("%d", &time[b]);
		for (b=0; b<osoby; b++) cookies+=DZIEN/time[b];
		wynik=cookies/ciastka;
		if (wynik*ciastka^cookies) printf("%d\n",wynik+1);
		else printf("%d\n",wynik);
	}
	return 0;
}
