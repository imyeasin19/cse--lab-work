#include<stdio.h>
int main()
{
    int i,N,k;
    printf("Take N as input: ");
    scanf("%d",&N);
    k=i=0;
    while(i<=N)
    {
        k+=i;
        i++;
    }
        printf("Sum of the series is : %d",k);
        return 0;
}
