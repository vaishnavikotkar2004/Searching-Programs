#include<stdio.h>
void accept(int a[100],int n)
{
 int i;
 printf("enter the array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}
void disp(int a[100],int n)
{
 int i;
 printf("the array elements");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
int linear(int a[100],int n)
{
 int i,key;
 printf("enter key");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(a[i]==key)
    return i;
 }
 return -1;
}
int main()
{
 int i,n,a[100],p;
 printf("enter limit");
 scanf("%d",&n);
 accept(a,n);
 disp(a,n);
 p=linear(a,n);
 if(p==-1)
    printf("\n not found");
 else
    printf("\n found=%d",p);
}
