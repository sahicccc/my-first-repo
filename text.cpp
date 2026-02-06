#include<stdio.h> 
int main()
{
	int max(int x,int y,int z);
	int a,b,c;
	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	printf("max=%d\n",max(a,b,c));
	return 0;
}
int max(int x,int y,int z)
{
	int w;
	if(x>y&&x>z)
		w=x;
	else if(y>x&&y>z)
		w=y;
	else
		w=z;
	return(w);
}
