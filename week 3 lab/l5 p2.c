#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if (a%4 ==0|| a%400==0)
        printf("%d is a Leap year",a);
    else if ( a%4 && a%100)
        printf("%d is not a Leap year",a);
        return 0;
}
