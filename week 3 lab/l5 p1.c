#include<stdio.h>
 int main()
 {
     int a,b;
     char c;
     printf("enter an operatior: ");
     scanf("%c",&c);
     printf("enter first operand: ");
     scanf("%d",&a);
     printf("enter second operand: ");
     scanf("%d",&b);


     switch(c)
     {
           case '+' : a+b;
         printf("The result is=%d",a+b);
         break;
         case '-': a-b;
         printf("The result is=%d",a-b);
         break;
         case '*': a*b;
         printf("The result is=%d",a*b);
         break;
         case '/':a/b;
         printf("The result is=%d",a/b);
         break;
         default:
            printf("you put 0");

     }
     return 0;
 }
