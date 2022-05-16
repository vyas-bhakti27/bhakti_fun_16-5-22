// Q8) Program to find out permutations and combinations

#include<stdio.h>
long factorial (int) ; // declaring factorial function
long perm(int, int);   // declaring permutation function
long comb (int, int);  // declaring combinations function
main( )
{
int n,r;
printf( "Enter n :") ;
scanf("%d" ,&n) ;
printf("Enter r : ") ;
scanf ("%d" ,&r) ;
printf ("Total combinations are : %ld\n",comb(n,r));
printf ("Total permutations are : %ld",perm(n,r));
}
long comb (int n, int r)
{
long c;
c=perm(n,r)/factorial(r) ;
    return c;
}
long perm(int n, int r)
{
long p;
p=factorial(n)/factorial(n-r);
    return p;
}
long factorial(int k)
{
long fact=1;
while ( k>0)
{
    fact*=k;
    k--;
}
return fact;
}

