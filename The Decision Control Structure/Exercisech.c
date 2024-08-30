/*Given the coordinates (x,y), of centre of a circle and its radius, 
write a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: sqrt() and pow() functions)*/
#include <stdio.h>
#include <math.h>
int main(){
    int x, y, x1, y1, radius;
    float distance;
    printf ("Enter the centre of the circle: ");
    scanf ("%d %d", &x, &y);
    printf ("Enter the radius of the circle: ");
    scanf ("%d", &radius);
    printf ("Enter the coordinates of the circle: ");
    scanf ("%d %d", &x1, &y1);
    distance = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    if (distance>radius){
        printf ("The coordinate %d,%d lie outside the circle", x1, y1);
    }
    else if (radius>distance){
        printf ("The coordinates %d,%d lie inside the circle", x1, y1);
    }
    else if (radius==distance){
        printf ("The coordinates %d,%d lie on the border of the circle", x1, y1);
    }
    return 0;
}