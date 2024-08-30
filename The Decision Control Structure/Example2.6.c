/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
If quantity and price per item are input through the keyboard, 
write a program to calculate the total expenses.*/
#include <stdio.h>

int main(){
    int amount, discount;
    printf ("Enter the total amount of purachase: ");
    scanf ("%d", &amount);
    discount = amount-(amount/10);
    if (amount>=1000){
        printf ("Your final bill after the discount: %d", discount);
    }
    else {
        printf ("Since you have buyed items less than 1000 so no discount for you.\nYour final bill: %d", amount);
    }
    return 0;
}