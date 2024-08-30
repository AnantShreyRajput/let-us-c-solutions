/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
For example, the area of the rectangle with the length= 5 and breadth= 4 is greater than its perimeter*/
#include <stdio.h>

int main(){
    int length, breadth; 
    float area, perimeter;
    printf ("Enter the length of the rectangle: ");
    scanf ("%d", &length);
    printf ("Enter the breadth of the rectangle: ");
    scanf ("%d", &breadth);
    perimeter= 2*(length+breadth);
    area= length*breadth;
    if (perimeter>area){
        printf ("The perimeter of the rectangle %.2f is greater than area of the rectangle %.2f.", perimeter, area);
    }
    else if (area>perimeter){
        printf ("The area of the rectangle %.2f is greater than permimeter of the rectangle %.2f.", area, perimeter);
    }
    else {
        printf ("Both values of area and perimeter of the rectangle are same %.2f", area);
    }
    return 0;
}