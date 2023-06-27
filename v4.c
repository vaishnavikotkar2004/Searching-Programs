#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE *fp1;
 int code,flag=0;
 char name[20],s1[20];
 fp1=fopen("cities.txt","r");
 if(fp1==NULL)
 {
   printf("file not found");
   exit(0);
 }
 printf("enter name to search");
 scanf("%s",s1);
 while(!feof(fp1))
 {
  fscanf(fp1,"%s%d",name,&code);
  if(strcmp(name,s1)==0)
   {
     flag=1;break;
    }
   fclose(fp1);
   if(flag==1)
      printf("\n std code=%d",code);
   else
      printf("city not found in the list");
  }
}
