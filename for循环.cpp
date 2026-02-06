#include<stdio.h>
#define SUM 100000
int main()
{
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=1000;i++)
	{
		printf("ÇëÊäÈë½ð¶î£º");
		total=amount+total;
		if(total>=10000) break;
	}
	aver=total/i;
	printf("num=%d\naver=%l0.2f\n",i,aver);
	return 0;	
 } 
