// Accept two arrays and display union of two arrays..
#include<stdio.h>
int main()
{
 int a[20],b[20],c[40],i,j,n1,n2,flag,k=0;
 printf("enter first array limit");
 scanf("%d",&n1);
 printf("enter first array element");
 for(i=0;i<n1;i++)
 scanf("%d",&a[i]);
 printf("enter second array limit");
 scanf("%d",&n2);
 printf("enter second array element");
 for(j=0;j<n2;j++)
 scanf("%d",&b[j]);
 for(i=0;i<n1;i++)
 c[k++]=a[i];
 for(i=0;i<n2;i++)
 {
   flag=0;
   for(j=0;j<n1;j++)
   {
     if(b[i]==a[j])
     {
      flag=1;
      break;
     }
   }
   if(flag==0)
   {
    c[k++]=b[i];
    }
  }
  printf("\n union of two arrays");
  for(i=0;i<k;i++)
  printf("%d\t",c[i]);
}
