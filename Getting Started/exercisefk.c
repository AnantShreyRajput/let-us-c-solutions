/*In a town, the percentage of men is 52. 
The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population, 
write a program to find the total number of illiterate men and women if the population of the town is 80,000.*/
#include <stdio.h>

int main(){
    int literatemen, literatewomen, illetratemen, illeteratewomen, population;
    population = 80000;
    printf ("The total population of the city is: %d\n", population);
    literatemen = 80000*35/100;
    printf ("The total literate men in the city is: %d\n", literatemen);
    illetratemen = 80000*17/100;
    printf ("The total illiterate women in the city: %d\n", illetratemen);
    literatewomen = 80000*13/100;
    printf ("The total literate women in the city: %d\n", literatewomen);
    illeteratewomen = 80000*35/100;
    printf ("The total illeterate women in the city: %d\n", illeteratewomen);
    return 0;
}