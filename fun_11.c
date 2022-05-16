//Q11) Program to convert a decimal number to roman number

#include<stdio.h>

int roman(int, int, char); // declaring function with name roman
main ( )
{
int num;
printf ("Enter a number ") ;
scanf("%d",&num) ;
if(num>=1000)
num=roman(num,1000, 'm'); // calling function & save them into num variable
if(num>=500)
num=roman(num, 500, 'd');
if(num>=100)
num=roman(num,100, 'c');
if(num>=50)
num=roman(num, 50, '1');
if (num>=10)
num=roman(num, 10, 'x');
if(num>=5)
num=roman(num,5, 'v');
if(num>=1)
roman (num, 1, 'i');
printf (" \n") ;
}
int roman(int n,int k,char c)  // defined the function
{
if(n==9)
{
printf("ix") ;
return 0;
}
if(n==4)
{
printf("iv") ;
return 0;
}
while(n>=k)
{
printf("%c" ,c);
n=n-k;
return n;
}
}
