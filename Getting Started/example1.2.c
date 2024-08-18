/*The distance between two cities (in kilometers) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.*/
#include <stdio.h>

int main(){
    float kilometers, meters, feet, inches, centimeters;
    printf ("Enter the distance in kilometers: ");
    scanf ("%f", &kilometers);
    meters = kilometers*1000;
    feet = meters*3.28084;
    inches = feet*12;
    centimeters = meters*100;
    printf ("Distance in meters: %.2f\n", meters);
    printf ("Distance in feet: %.2f\n", feet);
    printf ("Distance in inches: %.2f\n", inches);
    printf ("Distance in centimeters: %.2f\n", centimeters);
    return 0;
}