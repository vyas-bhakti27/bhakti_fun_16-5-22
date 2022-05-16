
//Q5) Program to understand the use of return statement

#include<stdio.h>
void funct (int age, float ht); // declaration of function
main( )
{
int age;
float ht;
printf ("Enter age and height:" ) ;
scanf("%d %f", &age, &ht);
funct(age,ht) ;        // calling function
}
void funct (int age, float ht)  // deination of function
{
if (age>25)
{
printf("Age should be less than 25\n");
return;
}
if (ht<5)
{
printf ("Height should be more than 5\n");
return;
}
printf("Selected\n");
}
