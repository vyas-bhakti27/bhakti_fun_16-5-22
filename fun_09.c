// Q9) Program to convert a binary or octal number to a dec imal number

#include<stdio.h>
main()
{
int num, base, result;
char choice;
printf("Enter 'b' for binary and '0' for octal : ");
scanf("%c",&choice) ;
printf ("Enter the number :");
scanf("%d",&num);
if (choice== 'b' )
    base=2;
else
    base=8;
result=func(num,base) ;
printf ("Decimal number is %d\n", result) ;
}
func(int n,int base)
{
int rem,d,j=1,dec=0;
while(n>0)
{
    rem=n%1O; /*taking last digit */
    d=rem*j;
    dec+=d;
    j*=base;
    n/=1O; /* skipping last digit */
}
return dec;
}
