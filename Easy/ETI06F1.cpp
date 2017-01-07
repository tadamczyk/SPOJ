// ETI06F1.cpp

#include <iostream>
#include <cstdio>
#define PI 3.141592654
using namespace std;
int main()
{
	double r,d;
	cin>>r>>d;
	double pole=PI*(r*r-d*d/4);
	printf("%.2f",pole);
	return 0;
}
