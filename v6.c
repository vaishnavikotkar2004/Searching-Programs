#include<stdio.h>
int main()
{
 int a[100],n,i,ch,s=0;
  printf("enter limit");
  scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 do
 {
  int s=0;
  printf("\n1-even position \n2-odd position");
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:for(i=0;i<n;i++)
           {
             if(i%2==0)
               s=s+a[i];
           }
           printf("\n even position=%d",s);
           break;
   case 2:for(i=0;i<n;i++)
           {
             if(i%2!=0)
               s=s+a[i];
            }
           printf("\n odd position=%d",s);
           break;
   default:printf("invalid choice");
           break;
  }
 }while(ch<3);
}
