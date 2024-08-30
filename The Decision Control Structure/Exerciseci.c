/*According to Geegorian calender, it was Monday on the date 01/01/01. 
If any year is input through the keyboard write a program to find out what is the day on 1st january of this year.*/
#include <stdio.h>

int main(){
    int year, leapdays, totaldays, normaldays;
    printf ("Enter the year through the keyboard: ");
    scanf ("%d", &year);
    normaldays = (year-1)*365;
    leapdays = (year-1)/4-(year-1)/100+(year-1)/400;
    totaldays = normaldays+leapdays;
    if (totaldays%7==0){
        printf ("The first day of the year %d will be MONDAY\n", year);
    }
    else if (totaldays%7==1){
        printf ("The first day of the year %d will be TUESDAY\n", year);
    }
    else if (totaldays%7==2){
        printf ("The first day of the year %d will be WEDNESDAY\n", year);
    }
    else if (totaldays%7==3){
        printf ("The first day of the year %d will be THURSDAY\n", year);
    }
    else if (totaldays%7==4){
        printf ("The first day of the year %d will be FRIDAY\n", year);
    }
    else if (totaldays%7==5){
        printf ("The first day of the year %d will be SATURDAY\n", year);
    }
    else if (totaldays%7==6){
        printf ("The first day of the year %d will be SUNDAY\n", year);
    }
    return 0;
}