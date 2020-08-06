#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&j);
    k=i=1;
    while(i<=j)
    {
        k*=i;
        i++;
    }
        printf("factoria of the %d is : %d",j,k);
        return 0;
}
