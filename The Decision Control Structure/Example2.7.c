/*The current year and the year in which the employee joined the organization are entered through the keyboard. 
If the number of years for which the employee has served the 
organization is greater than 3 then a bonus of Rs. 2500/- is given to the employee. 
If the years of service are not greater than 3, then the program should do nothing.*/
#include <stdio.h>

int main(){
    int currentyear=2024, yearjoined, difference, salary, bonus=2500;
    printf ("Enter the salary of the employee through the keyboard: ");
    scanf ("%d", &salary);
    printf ("Enter the year when employee joined the company: ");
    scanf ("%d", &yearjoined);
    difference=currentyear-yearjoined;
    if (difference>3){
        printf ("The total salary of employee after bonus %d", salary+bonus);
    }
    else {
        printf ("You do not qualify for the bonus.\nYour final salary: %d", salary);
    }
    return 0;
}