#include<stdio.h>
int main()
{ 
int n=4,z=1,i,j,k;//n for size and z for print control
for (i=1;i<=n;i++) //Outer Loop
{
	for (j=n-1;j>=i;j--)  //Space Loop
	{printf(" ");
	
	}
	for (k=1;k<=z;k++) //Print Loop
	{ printf("*");
	
	}
	z=z+2;
	printf("\n");
}
}
