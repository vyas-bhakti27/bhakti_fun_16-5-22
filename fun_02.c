// Q2) Program to find the sum of two numbers

#include <stdio.h>
int sum(int x, int y);   /* function declaration */

main()
{
    int a,b,s;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    s=sum(a,b);           /* function calling */
    printf ("Sum of %d and %d is %d\n" ,a, b, s) ;
    
}
int sum(int x, int y)  /* function defination */
{
    int s;
    s=x+y;
    return s;
}

