#include<stdio.h>
int main()
{
    float var1,var2,var3,var4,var5,avarage;
    printf("enter five numbers: ");
    scanf("%f %f %f %f %f", &var1,&var2,&var3,&var4,&var5);
    avarage=(var1+var2+var3+var4+var5/5);
    printf("\n avarage of five number= %f",avarage);
    return 0;
}
