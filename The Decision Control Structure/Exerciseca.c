/*A five-digit number is entered through the keyboard the keyboard.
Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.*/
#include <stdio.h>

int main(){
    int number, reversednumber;
    printf ("Enter the five-digit number entered through the keyboard: ");
    scanf ("%d", &number);
    int num1 = number/10000;
    int num2 = (number%10000)/1000*10;
    int num3 = (number%1000)/100*100;
    int num4 = (number%100)/10*1000;
    int num5 = (number%10)*10000;
    reversednumber = num1+num2+num3+num4+num5;
    printf ("The five digit number after reversing: %d\n", reversednumber);
    if (number==reversednumber){
        printf ("The number entered through the keyboard and its reverse are same");
    }
    else {
        printf ("The number entered through the keyboard and its reverse are not same");
    }
    return 0;
}