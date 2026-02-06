//斐波那契数列 
//#include<stdio.h>
//int main()
//{
//	int f1=1, f2=1, f3;
//	int i;
//	printf("%12d\n%12d\n",f1,f1);
//	for(i=1;i<=30;i++)
//	{
//		f3=f1+f2;
//		printf("%12d\n",f3);
//		f1=f2;
//		f2=f3;
//	}
//return 0;
 //} 
 
 //求最大值max
 //#include<stdio.h>
 //int main()
 //{
 //	int max(int x, int y);
 //	int a,b;
 //	printf("请输入两个整数：");
//	scanf("%d %d",&a,&b) ;
//	printf("max=:%d",max(a,b));
//	return 0;
  //} 
//int max(int x, int y)
//{
//	int z;
//	if(x>y)
//		z=x;
//	else
//		z=y;
//	return(z);
//}

//水仙花数
//#include<stdio.h>
//int main()
//{
//	int a, b ,c;
//	int i;
//	for(i=100;i<1000;i++)
//	{
//		a=i/100;
//		b=(i/10)%10;
//		c=i%10;
//		if(a*a*a+b*b*b+c*c*c==i)
//			printf("%d\n",i);
//	}
//	printf("以上为所有水仙花数") ;
//	return 0; 
// } 

//循环
//#include<stdio.h>
//int main()
//{
//	int i;
//	int t;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2==0)
//		{
//			t=i*(-1);
//			printf("%d\n",t);
//		}
//		else
//			printf("%d\n",i);
//	}
//	return 0;
// } 


//矩阵
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int n=0;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=5;j++,n++)
//		{
//			if(n%5==0)
///				printf("\n");
//			printf("%d\t",i*j);
//		}
//	}
//	printf("\n");
//	return 0;
// }

//判断是否为素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, i, k;
//	printf("please enter a integer number:\n");
//	scanf("%d",&n);
//	k=sqrt(n);
//	for(i=2;i<=k;i++)
//	{
//		if(n%i==0) break;
//	}
//	if(i<=k) printf("%d is not a prime number.\n",n);
//	else printf("%d is a prime number.\n",n);
//	return 0;
//}


//译密码
//#include<stdio.h>
//int main()
//{
//	char c;
//	c=getchar();
//	while(c!='\n')
//	{
//		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
//		{
//			if(c>='W'&&c>='Z'||c>='w'&&c<='z') c=c-22;
//			else c=c+4;
//		}
//		printf("%c",c);
//		c=getchar();
//	}
//	printf("\n");
//	return 0;
//}

//分别统计英文字母，空格 数字和其他字符的个数
#include<stdio.h>
int main()
{
	char str[200];
	int strings=0;
	int spaces=0;
	int digits=0;
	int others=0;
	int i;
	printf("请输入一行字符："); 
	fgets(str, sizeof(str) , stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') strings++;
		else if(str[i]==' ') spaces++;
		else if(str[i]>='0'&&str[i]<='9') digits++;
		else if (str[i]!='\n') others++;
	}
	printf("字母有%d个\n",strings);
	printf("空格有%d个\n",spaces);
	printf("数字有%d个\n",digits);
	printf("其他字符有%d个\n",others);
	return 0;
 } 

