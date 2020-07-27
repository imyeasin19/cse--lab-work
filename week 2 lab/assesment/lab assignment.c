#include<stdio.h>
int main()

{
    float number;
    printf("inter a number: ");
    scanf("%f",& number);
    if(number>0)
        printf("the number is positive real");
    else if(number<0)
        printf("the number is negetive real");
    if(number>0 && number-(int)number==0)
    printf("\n the number is natural number");
    return 0;



}
