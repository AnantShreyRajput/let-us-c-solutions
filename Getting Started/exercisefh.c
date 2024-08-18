/*If the value of an angle is input through the keyboard, write a program to print all its trigonometric ratios*/
#include <stdio.h>
#include<math.h>
int main(){
    float sin0, cos0, tan0, cosec0, sec0, cot0, angle, radian;
    printf ("Enter the angle of the trigonometric ratios: ");
    scanf ("%f", &angle);
    radian = angle*3.14/180;
    sin0=sin(radian);
    cos0=cos(radian);
    tan0=tan(radian);
    cosec0=1/sin0;
    sec0=1/cos0;
    cot0=1/tan0;
    printf ("Sin0 = %.2f\n", sin0);
    printf ("Cos0 = %.2f\n", cos0);
    printf ("Tan0 = %.2f\n", tan0);
    printf ("Cosec0 = %.2f\n", cosec0);
    printf ("Sec0 = %.2f\n", sec0);
    printf ("Cot0 = %.2f\n", cot0);
    return 0;
}