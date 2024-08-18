/*If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402.*/
#include <stdio.h>

int main(){
    int number, newmunber;
    printf ("Enter the five digit number through your keyboard: ");
    scanf ("%d", &number);
    newmunber = number+11111;
    printf ("The new number after adding one to every digit to five digit number: %d", newmunber);
    return 0;
}