// Write a c program to find the largest pair sum in an unsorted array....
#include<stdio.h>
int main()
{
 int a[100],i,n,max1,max2,sum=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max1=a[0];
 for(i=0;i<n;i++)
 {
  if(max1<a[i])
  max1=a[i];
 }
 printf("\n enter first max no=%d",max1);
 max2=a[i];
 for(i=0;i<n;i++)
 {
  if(max2<a[i])
  {
   if(a[i]!=max1)
    max2=a[i];
   }
  }
  printf("\n enter second max no=%d",max2);
  sum=max1+max2;
  printf("\n sum=%d",sum);
}
