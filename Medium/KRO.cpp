// KRO.cpp

#include <cstdio>
#include <algorithm>
using namespace std;
unsigned int fibo(int n, int a, int b)
{
	n=(n-1)%60+1;
	if (n==1) return a%10;
	if (n==2) return b%10;
	if (n>2)
	{
		for (int l=3; l<=n; l++)
		{
			swap(a,b);
			b=a%10+b%10;
		}
		return b%10;
	}
}
int main()
{
	int t,n,a,b;
	scanf("%d",&t);
	for (int l=0; l<t; l++)
	{
		scanf("%d %d %d",&n,&a,&b);
		printf("%d\n",fibo(n,a,b));
	}
	return 0;
}
