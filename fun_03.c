// Q3) Program  that  finds  whether a number is even or odd 

#include <stdio.h>
void find(int n);   /* function declaration */

main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    find(num);    /* calling function */
    
}
void find(int n)  /* function defination */
{
    if(n%2==0)
        printf("%d is even\n",n);
    else
        printf("%d is odd\n",n);
}
