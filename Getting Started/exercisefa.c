/*Temperature of a city in Farenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.*/
#include <stdio.h>

int main(){
    float centigrade, farenheit;
    printf ("Enter the temperature of city in Farenheit: ");
    scanf ("%f", &farenheit);
    centigrade = ((farenheit-32)*5)/9;
    printf ("The temperature of city in centigrage is: %.2f", centigrade);
    return 0;
}