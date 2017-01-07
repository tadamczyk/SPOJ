// KC004.cpp

#include <iostream>
using namespace std;
int main()
{
	int n,d;
	double x;
	while (cin>>n)
	{
		int s=0;
		cin>>d;
		for (int a=0; a<d; a++)
		{
			cin>>x;
			if (x==n) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
