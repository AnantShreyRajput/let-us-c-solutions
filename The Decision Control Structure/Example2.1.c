/*If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss.
Also determine how mush profit he made or loss he incurred.*/
#include <stdio.h>

int main(){
    int costprice, sellingprice, difference;
    printf ("Enter the cost price of the item: ");
    scanf ("%d", &costprice);
    printf ("Enter the selling price of the item: ");
    scanf ("%d", &sellingprice);
    difference = sellingprice-costprice;
    if (difference>0){
        printf ("The seller gained a profit of %d\n", difference);
    }
    else if (difference<0){
        printf ("The seller suffered a loss of %d\n", -difference);
    }
    else if (difference==0){
        printf ("The seller neither gained a profit nor suffered a loss\n");
    }
    return 0;
}