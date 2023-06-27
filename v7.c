#include<stdio.h>
int main()
{
 int a[100],b[100],n,i;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 b[i]=a[i];
 printf("\n first array");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 printf("second array");
 for(i=0;i<n;i++)
 printf("%d\t",b[i]);
}
