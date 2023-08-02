#include<stdio.h>
void accept(int a[],int n)
{
 int i;
 printf("enter array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}
void disp(int a[],int n)
{
 int i;
 printf("the array elements");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
int sentinal(int a[],int n)
{
 int i=0,key;
 printf("enter key");
 scanf("%d",&key);
 a[n]=key;
 while(a[i]!=key)
 {
   i++;
 }
 if(i==n)
    return -1;
 else
    return i;
}
int main()
{
 int i,n,a[100],p;
 printf("enter limit");
 scanf("%d",&n);
 accept(a,n);
 disp(a,n);
 p=sentinal(a,n);
 if(p==-1)
    printf("\n not found");
 else
    printf("\n found at pos=%d",p);
}
