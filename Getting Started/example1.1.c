/*Ramesh's basic salary is input through the keyboard. 
His dearness allowance is 40% of is basic salary and the house rent is 20% of his basic salary. 
Write a program to calculate his gross salary.*/

#include <stdio.h>

int main(){
    float basicsalary, houserentallowance, dearnessallowance, grosssalary;
    printf ("Enter the basic salary of the  Ramesh: ");
    scanf ("%f", &basicsalary);
    houserentallowance = basicsalary*2/10;
    dearnessallowance = basicsalary*4/10;
    grosssalary = basicsalary+houserentallowance+dearnessallowance;
    printf ("The gross salary of Ramesh is: %.2f\n", grosssalary);
    return 0;
}