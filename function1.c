#include<stdio.h>
int add(int a,int b );
int main(){
	int a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
int add(int a ,int b)
{
	printf("Sum: %d",a+b);
}
