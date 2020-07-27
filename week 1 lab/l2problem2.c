#include<stdio.h>
#include<math.h>
int main()
{
    float hy,base,height,area;
    printf("enter base: ");
    scanf("%f",&base);
    //hy should gater than base
    printf("enter hy: ");
    scanf("%f",&hy);
    height= sqrt(pow(hy,2)-pow(base,2));
    printf("\n print the height = %0.2f",height);
    area= height*base/2;
    printf(" print the area= %0.2f",area);
    return 0;
}
