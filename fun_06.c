// Q6) Program to find out the factorial of a number

#include<stdio.h>
long int factorial (int n);
main()
{
int num;
printf ("Enter a number ");
scanf("%d",&num) ;
if (num<0)
printf ("No factorial of negative number\n,");  // negative has no factorial
else
printf ("Factorial of %d is %ld\n", num, factorial (num) ) ;
}
long int factorial (int n)  // define the function
{
    int i;
    long int fact=1;
    if(n==0)
        return 1;
    for(i=n;i>1;i--) 
        fact*=i;
            return fact;
}
        
