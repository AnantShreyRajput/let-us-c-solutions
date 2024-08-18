/*The length and breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area and perimeter of the rectangle,
and the area of circumference of the circle.*/
#include <stdio.h>

int main(){
    float length, breadth, radius, perimeterofrectangle, areaofcircle;
    printf ("Enter the length of rectangle: ");
    scanf ("%f", &length);
    printf ("Enter the breadth of rectangle: ");
    scanf ("%f", &breadth);
    printf ("Enter the radius of circle: ");
    scanf ("%f", &radius);
    perimeterofrectangle = 2*(length+breadth);
    areaofcircle = 3.14*radius*radius;
    printf ("The perimeter of rectangle: %.0f\n", perimeterofrectangle);
    printf ("The area of circle is: %.2f\n", areaofcircle);
    return 0;
}