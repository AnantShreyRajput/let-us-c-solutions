/*Consider a currency system in which there are notes of six denominations, namely,
Rs.1, Rs.2, Rs.5, Rs.10, Rs.20, Rs.50, Rs.100, Rs.200, Rs.500, Rs.2000.
If a sum of Rs.N is entered through the keyboard, 
write a program to compute the smallest number of notes that will combine to give Rs.N*/
#include <stdio.h>

int main(){
    int amount;
    printf ("Enter the amount deposited: ");
    scanf ("%d", &amount);
    printf ("Number of notes of 2000: %d\n", amount/2000);
    printf ("Number of notes of 500: %d\n", amount%2000/500);
    printf ("Number of notes of 200: %d\n", amount%2000%500/200);
    printf ("Number of notes of 100: %d\n", amount%2000%500%200/100);
    printf ("Number of notes of 50: %d\n", amount%2000%500%200%100/50);
    printf ("Number of notes of 20: %d\n", amount%2000%500%200%100%50/20);
    printf ("Number of notes of 10: %d\n", amount%2000%500%200%100%50%20/10);
    printf ("Number of notes of 5: %d\n", amount%2000%500%200%100%50%20%10/5);
    printf ("Number of notes of 2: %d\n", amount%2000%500%200%100%50%20%10%5/2);
    printf ("Number of notes of 1: %d\n", amount%2000%500%200%100%50%20%10%5%2/1);
    return 0;
}
