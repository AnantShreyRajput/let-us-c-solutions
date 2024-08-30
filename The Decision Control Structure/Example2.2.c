/*Any integer is input through the keyboard.
Write a problem to find out whether it is an odd number or even number.*/
#include <stdio.h>

int main(){
    int number;
    printf ("Enter the number through the keyboard: ");
    scanf ("%d", &number);
    if (number%2==0){
        printf ("The number %d entered through the keyboard is an even number.\n", number);
    }
    else if (number%2==1){
        printf ("The number %d entered through the keyboard is an odd number.\n", number);
    }
    return 0;
}