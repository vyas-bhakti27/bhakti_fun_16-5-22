// Q7) Program to understand formal and actual arguments 

#include<stdio.h>
main( )
{
int m=6,n=3;
printf("%d\t",mutiply(m,n));
printf("%d\t",mutiply(15,4));
printf("%d\t",mutiply(m+n,m-n));
printf("%d\t",mutiply(6,sum(m,n));

}
multiply (int x, int y)
{
    int p;
    p=x*y;
    return p;
}
sum ( int x , int y)
{
    int q;
    return x+y;
}
