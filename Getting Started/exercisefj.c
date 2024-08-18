/*If a four-digit number is input through the keyboard, 
write a program to obtain the sum of the first and last digit of this number.*/
#include <stdio.h>

int main(){
    int number;
    printf ("Enter the four digit number though the keyboard: ");
    scanf ("%d", &number);
    int num1 = number/1000;
    int num2 = number%10;
    int sum = num1+num2;
    printf ("The sum of first and last number of four digit number: %d", sum);
    return 0;
}
