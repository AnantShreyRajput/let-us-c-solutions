/*Wind-Chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + (0.4275t - 35.75)*v^0.16*/
#include <stdio.h>
#include <math.h>
int main(){
    float temperature, velocity, wcf;
    printf ("Enter the value of the temperature of surrounding: ");
    scanf ("%f", &temperature);
    printf ("Enter the velocity of the air in the surrounding: ");
    scanf ("%f", &velocity);
    wcf = 35.74 + 0.6215*temperature + (0.4275*temperature - 35.75)*pow(velocity,0.16);
    printf ("The wind-chill factor of the surrounding: %.2f", wcf);
    return 0;
}