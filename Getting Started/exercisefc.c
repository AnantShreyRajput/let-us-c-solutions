/*Paper of the size A0 has the dimentions 1189mm X 841mm.
Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
Thus, paper of size A1 would have dimensions 841mm X 594mm. 
Write a program to calculate and print paper sizes A0, A1, ....., A8.*/
#include <stdio.h>

int main(){
    int dimension1=1189, dimension2=841;
    printf ("The dimension size of A0 paper: %dmm X %dmm\n", dimension1, dimension2);
    printf ("The dimension size of A1 paper: %dmm X %dmm\n", dimension2, dimension1/2);
    printf ("The dimension size of A2 paper: %dmm X %dmm\n", dimension1/2, dimension2/2);
    printf ("The dimension size of A3 paper: %dmm X %dmm\n", dimension2/2, dimension1/4);
    printf ("The dimension size of A4 paper: %dmm X %dmm\n", dimension1/4, dimension2/4);
    printf ("The dimension size of A5 paper: %dmm X %dmm\n", dimension2/4, dimension1/8);
    printf ("The dimension size of A6 paper: %dmm X %dmm\n", dimension1/8, dimension2/8);
    printf ("The dimension size of A7 paper: %dmm X %dmm\n", dimension2/8, dimension1/16);
    printf ("The dimension size of A8 paper: %dmm X %dmm\n", dimension1/16, dimension2/16);
    return 0;
}