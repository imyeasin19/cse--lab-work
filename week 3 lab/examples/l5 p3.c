
#include<stdio.h>
int main()
{
 int m,y;
 printf("Enter month number: ");
 scanf("%d",&m);
  switch(m)
 {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
    printf("number of days=31");
     break;
    case 4:
    case 6:
    case 9:
    case 11:
      printf("number of the days=30");
     break;
    case 2:
        printf("enter the year");
        scanf("%d",&y);

     if (y%4 ==0|| y%400==0){
        printf("%d is a Leap year and number of days=29",y);
     }
    else if ( y%4 && y%100){
        printf("%d is not a Leap year and number of days=28",y);
    }
        break;
        deafult:
            printf("error");
    return 0;
    }
}
