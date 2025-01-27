#include<stdio.h>
int swap(int* ,int* );
int main()
{
int a,b,*x,*y;
printf("Enter a and b");
scanf("%d %d",&a,&b);
x=&a;
y=&b;
swap(x,y);
printf("a=%d b=%d",a,b);
}
int swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
