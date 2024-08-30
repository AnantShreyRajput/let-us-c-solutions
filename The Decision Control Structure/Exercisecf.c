/*Given three points (x1,y1), (x2,y2), (x3,y3), write a program to check if the three points fall on one straight line.*/
#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    float slope1, slope2;
    printf ("Enter the x and y coordinates of first point by your keyboard: ");
    scanf ("%d %d", &x1, &y1);
    printf ("Enter the x and y coordinates of second point by your keyboard: ");
    scanf ("%d %d", &x2, &y2);
    printf ("Enter the x and y coordinates of third point by your keyboard: ");
    scanf ("%d %d", &x3, &y3);
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if (slope1==slope2){
        printf ("All three points fall on same line");
    }
    else if (slope1!=slope2){
        printf ("All three point does not fall on same line");
    }
    return 0;
}