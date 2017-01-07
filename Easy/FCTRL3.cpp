// FCTRL3.cpp

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int* N = new int[t];
	for(int a = 0; a != t; a++) cin >> N[a];
	for(int b= 0; b != t; b++)
	{
		switch(N[b])
		{
		case 0:
		case 1:
			cout << 0 << ' ' << 1 << endl;
			break;
		case 2:
			cout << 0 << ' ' << 2 << endl;
			break;
		case 3:
			cout << 0 << ' ' << 6 << endl;
			break;
		case 4:
			cout << 2 << ' ' << 4 << endl;
			break;
		case 8:
		case 6:
		case 5:
			cout << 2 << ' ' << 0 << endl;
			break;
		case 7:
			cout << 4 << ' ' << 0 << endl;
			break;
		case 9:
			cout << 8 << ' ' << 0 << endl;
			break;
		default:
			cout << 0 << ' ' << 0 << endl;
		}
	}
	return 0;
}
