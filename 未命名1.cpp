#include<stdio.h>
float Max=0 , Min=0;
int main()
{ float average(float array[], int n);
  float ave, score[10];
  int i;
  printf("Please enter 10 scores:");
  for(i=0;i<10;i++)
  	scanf("%f",&score[i]);
  ave=average(score,10);
  printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n",Max,Min,ave);
  return 0;
 } 
 
 float average(float arry)
