#include<stdio.h>
#include<string.h>
main()
{
  char str1[100],str2[100];
  int v;
  printf(" Enter First string  : ");
  scanf("%s",str1);
  printf(" Enter Second string : ");
  scanf("%s",str2);
  v=strcmp(str1,str2);
  if(v==0)
  printf(" Both strings are same. ");
  else if(v>0)
  printf(" %s comes after %s ",str1,str2);
 else
 printf(" %s comes before %s ",str1,str2); 
}
