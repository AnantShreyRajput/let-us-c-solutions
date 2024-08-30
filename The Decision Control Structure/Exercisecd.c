/*Write a program to find the absolute value of a number entered through the keyboard.*/
#include <stdio.h>

int main(){
    int number;
    printf ("Enter a number through the keyboard: ");
    scanf ("%d", &number);
    if (number>=0){
        printf ("The absolute value of the number entered through the keyboard is: %d", number);
    }
    else if (number<0){
        printf ("The absolute value of the number entered through the keyboard is: %d", -number);
    }
    return 0;
}