#include<stdio.h>
#include<string.h>
int main()
{
  char s1[20][20],nm[20];
  int i,n,top,bottom,mid,flag=0;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n cities in sorted order");
  for(i=0;i<n;i++)
  scanf("%s",s1);
  printf("enter city name to search");
  scanf("%s",nm);
  top=0;bottom=n-1;
  while(top<=bottom)
  {
   mid=(top+bottom)/2;
   if(strcmp(s1[mid],nm)==0)
   {
     flag=1;break;
   }
   if(nm>s1[mid])
     top=mid+1;
    else
      bottom=mid-1;
   }
   if(flag==1)
      printf("name is found");
   else
      printf("name is not found");
}
