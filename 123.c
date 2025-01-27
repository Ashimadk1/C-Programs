#include<stdio.h>
int main()
{ 
int n=5,z=1,i,j,k;//n for size and z for print control
for (i=1;i<=n;i++) //Outer Loop
{
	for (j=n-1;j>=i;j--)  //Space Loop
	{printf(" ");
	
	}
	for (k=z;k>=1;k--) //Print Loop
	{ printf("%d",k);
	
	}
	z=z+2;
	printf("\n");
}
}
