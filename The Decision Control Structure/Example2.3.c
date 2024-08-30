/*Any year is input through the keyboard.
Write the program to determine whether the year is a leap year or not.*/
#include <stdio.h>

int main(){
    int year;
    printf ("Enter the year through your keyboard: ");
    scanf ("%d", &year);
    if ((year%4==0 && year%100!=0) || year%400==0){
        printf ("The year entered through the keyboard %d is a leap year", year);
    }
    else {
        printf ("The year entered through the keyboard %d is not a leap year", year);
    }
    return 0;
}