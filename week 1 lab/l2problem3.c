#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float A,P,pi = 3.1416;
    printf("Enter radius: ");
    scanf("%d",&r);
    P = 2*pi*r;
    A = pi*pow(r,2);
    printf("Area of the circle= %0.2f\n",A);
    printf("Perimeter of the circle= %0.2f\n",P);
    return 0;
}
