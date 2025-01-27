#include<stdio.h>
int main()
{
  int a, sum=0, rem;
  
  printf("Enter any integer: ");
  scanf("%d", &a);
  
  
  do
  {
    rem=a%10;
    sum=sum+rem;
    a=a/10;
    
  }while(a>0);

  printf("The sum   of digit  is %d", sum );

  return 0;
}
