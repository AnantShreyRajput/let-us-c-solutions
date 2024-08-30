/*Given the coordinates (x,y) write a program to find out if it lies on x-axis, y-axis or origin.*/
#include <stdio.h>

int main(){
    int x, y;
    printf ("Enter the coordinates of the points: ");
    scanf ("%d %d", &x, &y);
    if (x==0 && y!=0){
        printf ("The point lies on the x-axis.");
    }
    else if (y==0 && x!=0){
        printf ("The point lies on the y-axis.");
    }
    else if (x==0 && y==0){
        printf ("The point lies on origin.");
    }
    return 0;
}