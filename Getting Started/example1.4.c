/*If the length of three sides of a triangle are input through the keyboard,
Write a program to find the area of the triangle.*/
#include <stdio.h>
#include <math.h>
int main(){
    int side1, side2, side3;
    float semiperimeter, area;
    printf ("Enter the three sides of thr triangle: ");
    scanf ("%d %d %d", &side1, &side2, &side3);
    semiperimeter = (side1+side2+side3)/2;
    area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    printf ("Area of the triangle: %.2f", area);
    return 0;
}