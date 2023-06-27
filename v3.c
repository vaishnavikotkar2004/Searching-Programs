#include<stdio.h>
int main()
{
  int a[100],n,i,num,c1=0;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter num to search");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
      c1++;
  }
   printf("\n count number present=%d",c1);
}
