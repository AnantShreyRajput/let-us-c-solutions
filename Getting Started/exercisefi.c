/*Two numbers are input through the keyboard into two location C and D.
Write a program to interchange the contents of C and D.*/
#include <stdio.h>

int main(){
    int c, d;
    printf ("Enter the value of C and D: ");
    scanf ("%d %d", &c, &d);
    printf ("The value of C and D after interchanging: %d %d", d, c);
    return 0;
}