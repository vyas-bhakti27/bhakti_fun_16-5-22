// Q4) Program to find  the larger of two numbers

#include<stdio.h>
int max(int x,int y); // declaration of function

main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf ("Maximum of %d and %d is %d\n",a,b,max(a,b));
}
int max(int x, int y)
{
    if(x>y)
        return x;  // return x if x is greater
    else
        return y;  // return y if x is greater
}
