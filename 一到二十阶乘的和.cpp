#include<stdio.h>
int main()
{
	long long sum=0;
	long long fact=1;
	for(int i=1;i<=20;i++)
	{	fact=fact*i;
		sum+=fact;
	}
	printf("answer=%lld",sum);
	return 0;
}

