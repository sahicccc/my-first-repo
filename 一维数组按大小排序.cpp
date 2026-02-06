#include<stdio.h>

int main()
{
	int a[10];
	int i,min,j,t;
	printf("请输入十个整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//给数组赋值 
	
	for(i=0;i<9;i++)          //遍历整个数组 
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[min])        //比较当前的i与下一个数的大小 
			{
				min=j;
			}
		}
		if(min!=i)           //判断小的数是否为a[i]，若不是则通过变量t 将a[i]换为最小的数 
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	
	printf("排列好的顺序为：\n");
	for(i=0;i<10;i++)           //输出排列好的数组 
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	return 0;
 } 
