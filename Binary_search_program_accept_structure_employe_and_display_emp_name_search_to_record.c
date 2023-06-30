#include<stdio.h>
#include<string.h>
struct emp
{
 int eno;
 char name[20];
 float sal;
}e1[10];
int main()
{
  char nm[20];
  int i,n,mid,bottom,top,flag=0;
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
  printf("enter name to search");
  scanf("%s",nm);
  top=0;bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(strcmp(e1[mid].name,nm)==0)
    {
      flag=1;break;
    }
    if(nm>e1[mid].name)
      top=mid+1;
    else
      bottom=mid-1;
   }
   if(flag==1)
     printf("\n name is found");
   else
     printf("\n name is not found");
}
