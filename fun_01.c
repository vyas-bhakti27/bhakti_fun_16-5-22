// Q1) Program to find the square root of any numbers

#include<stdio.h>
#include<math.h>
main()
{
    double n, s;
    printf ("Enter a number : ");
    scanf ("%lf", &n) ;
    s=sqrt (n) ;    // using predefined function
    printf ("The square root of %.21f is %.2lf\n",n, s );
}
