/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
write a program to find the cost price of one item.*/
#include <stdio.h>

int main(){
    float sellingprice, profit, costprice;
    printf ("Enter the selling price of 15 items: ");
    scanf ("%f", &sellingprice);
    printf ("Enter the profit by 15 item being sold: ");
    scanf ("%f", &profit);
    costprice = (sellingprice-profit)/15;
    printf ("The cost price of each item is: %.2f\n", costprice);
    return 0;
}