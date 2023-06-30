#include<stdio.h>
struct emp
{
  int eno;
  char name[20];
  float sal;
}e1[100];
int main()
{
  int num,flag=0,mid,top,bottom,i,n;
  printf("enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter emp no name salary");
    scanf("%d%s%f",&e1[i].eno,e1[i].name,&e1[i].sal);
  }
  for(i=0;i<n;i++)
  {
   printf("\n%d\t%s\t%f",e1[i].eno,e1[i].name,e1[i].sal);
  }
 printf("enter number to search");
 scanf("%d",&num);
 top=0;bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(num==e1[mid].eno)
  {
    flag=1;break;
  }
  if(num>e1[mid].eno)
     top=mid+1;
  else
     bottom=mid-1;
  }
  if(flag==1)
     printf("number is found");
  else
     printf("number is not found");
}
