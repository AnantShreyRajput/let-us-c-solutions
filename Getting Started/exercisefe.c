/*Write a program to recieve Cartisian co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,s)
HINT: r = sqrt(x^2+y^2) and s = tan^-1(y/x)*/
#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    float r, s;
    printf ("Enter the cartisian co-ordinates of the point: ");
    scanf ("%d %d", &x, &y);
    r = sqrt(x*x+y*y);
    s = tan(pow(-1,y/x));
    printf ("The polar coordinates of the point: %.2f, %.2f", r, s);
    return 0;
}