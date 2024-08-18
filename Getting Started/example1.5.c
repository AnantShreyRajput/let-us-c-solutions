/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/
#include <stdio.h>

int main(){
    int number, num1, num2, num3, num4, num5, reversednumber;
    printf ("Enter the five digit number: ");
    scanf ("%d", &number);
    num1 = (number%10000)/1000*10;
    num2 = (number%1000)/100*100;
    num3 = (number%100)/10*1000;
    num4 = (number%10)*10000;
    num5 = (number/10000);
    reversednumber = num1+num2+num3+num4+num5;
    printf ("The reverse of the five digit number: %d", reversednumber);
    return 0;
}