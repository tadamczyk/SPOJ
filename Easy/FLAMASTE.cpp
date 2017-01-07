// FLAMASTE.cpp

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string znaki[200];
	for (int a=0; a<t; a++)
	{
		cin>>znaki[a];
		int suma=0;
		for (int b=0; b<znaki[a].length(); b++)
		{
			suma++;
			if (znaki[a][b]!=znaki[a][b+1] and suma>2) {cout<<znaki[a][b]<<suma; suma=0; continue; };
			if (znaki[a][b]!=znaki[a][b+1] and suma==2) {cout<<znaki[a][b-1]<<znaki[a][b]; suma=0; continue; };
			if (znaki[a][b]!=znaki[a][b+1] and suma==1) {cout<<znaki[a][b]; suma=0; continue; };
		}
		cout<<endl;
	}
	return 0;
}
