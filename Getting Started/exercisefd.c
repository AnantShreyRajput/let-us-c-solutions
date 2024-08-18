/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.*/
#include <stdio.h>

int main(){
    int number, num1, num2, num3, num4, num5, sumofnumber;
    printf ("Enter the five digit number: ");
    scanf ("%d", &number);
    num1 = (number/10000);
    num2 = (number%10000)/1000;
    num3 = (number%1000)/100;
    num4 = (number%100)/10;
    num5 = (number%10);
    sumofnumber = num1+num2+num3+num4+num5;
    printf ("Sum of the five digit number: %d", sumofnumber);
    return 0;
}