#include<stdio.h>
int main()
{
   int var;
printf("enter a positive number: ");
scanf("%d",& var);
if ( var%2==0)
printf("the number is even");
else if ( var%2!=0)
printf("the number is  odd");
return 0;
}
