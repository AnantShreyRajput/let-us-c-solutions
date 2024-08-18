/*Write a program to recieve values of latitude (l1,l2) and longitude (g1,g2), 
in degrees, of two places on the earth and output the distance (D) between them in nautical miles.
The formula for distance in nautical miles is:
D = 3963cos^-1(sinL1sinL2+cosL1cosL2*cos(G2-G1))*/
#include <stdio.h>
#include <math.h>
int main(){
    float latitude1, latitude2, longitude1, longitude2, distance;
    printf ("Enter the coordinates of the first place: ");
    scanf ("%f %f", &latitude1, &longitude1);
    printf ("Enter the coordinates of the second place: ");
    scanf ("%f %f", &latitude2, &longitude2);
    distance= 3963*acos(sin(latitude1)*sin(latitude2)+cos(latitude1)*cos(latitude2)*cos(longitude1-longitude2));
    printf ("The distance between two cordinates entered through the keyboard: %.2f", distance);
    return 0;
}