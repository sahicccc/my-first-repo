#include<stdio.h>
int main()
{
	float h=100;
	float sum=0;
	for(int i=1;i<=10;i++)
	{	sum=sum+h;
		h=h/2;
	 } 
	sum=sum+h;
    printf("共经过%f米，第十次反弹%f米",sum,h);
	return 0;
}
