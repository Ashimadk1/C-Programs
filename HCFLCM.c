//To find HCF and LCM of two user entered numbers//
#include<stdio.h>
int main()
{int a,b,c,d,temp,hcf,lcm;
printf("Enter two numbers:");
scanf("%d %d",&c,&d);
a=c,b=d;
while(b!=0)
{temp=b;
b=a%b;
a=temp;
}
hcf=a;
lcm=(c*d)/hcf;
printf("The HCF and LCM of %d and %d is: %d and %d",c,d,hcf,lcm);
}

