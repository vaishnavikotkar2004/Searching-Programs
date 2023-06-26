#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n,num,flag=0,a[100];
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("enter random numbers");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 printf("enter number to search");
  scanf("%d",&num);
 for(i=0;i<n;i++)
 {
   if(a[i]==num)
   {
    flag=1;break;
    }
 }
  if(i==n)
    printf("number is not found");
  else
    printf("number is found position=%d",i);
}
