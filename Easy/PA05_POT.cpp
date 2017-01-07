// PA05_POT.cpp

#include <iostream>
using namespace std;
int main()
{
	long int n,a,b;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
		int x,wynik=0;
		x=a%10;
		switch(x)
		{
		case 0: {wynik=0; break; }
		case 1: {wynik=1; break; }
		case 2:
		{
			int y=b%4;
			switch(y)
			{
			case 0: {wynik=6; break; }
			case 1: {wynik=2; break; }
			case 2: {wynik=4; break; }
			case 3: {wynik=8; break; }
			}
			break;
		}
		case 3:
		{
			int y=b%4;
			switch(y)
			{
			case 0: {wynik=1; break; }
			case 1: {wynik=3; break; }
			case 2: {wynik=9; break; }
			case 3: {wynik=7; break; }
			}
			break;
		}
		case 4:
		{
			if(b%2==1) wynik=4;
			else wynik=6;
			break;
		}
		case 5: {wynik=5; break; }
		case 6: {wynik=6; break; }
		case 7:
		{
			int y=b%4;
			switch(y)
			{
			case 2: {wynik=9; break; }
			case 3: {wynik=3; break; }
			case 0: {wynik=1; break; }
			case 1: {wynik=7; break; }
			}
			break;
		}
		case 8:
		{
			int y=b%4;
			switch(y)
			{
			case 2: {wynik=4; break; }
			case 3: {wynik=2; break; }
			case 0: {wynik=6; break; }
			case 1: {wynik=8; break; }
			}
			break;
		}
		case 9:
		{
			if(b%2==1) wynik=9;
			else wynik=1;
			break;
		}
		}
		cout<<wynik<<endl;
	}
	return 0;
}
