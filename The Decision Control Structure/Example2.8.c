/*In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, 
then Home Rent Allowance = 10% of basic salary and Domestic Allowance = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, 
then Home Rent Allowance = Rs. 500 and Domestic Allowance = 98% of basic salary. 
If the employee's salary is input through the keyboard write a program to find his gross salary.*/
#include <stdio.h>

int main(){
    int basicsalary, homerentallowance, domesticallowance, grosssalary;
    printf ("Enter the salary of the employee through the keyboard: ");
    scanf ("%d", &basicsalary);
    if (basicsalary<1500){
        homerentallowance=basicsalary/10;
        domesticallowance=basicsalary*9/10;
        grosssalary=basicsalary+homerentallowance+domesticallowance;
        printf ("The gross salary of the employee: %d", grosssalary);
    }
    else if (basicsalary>=1500){
        homerentallowance=500;
        domesticallowance=basicsalary*98/100;
        grosssalary=basicsalary+homerentallowance+domesticallowance;
        printf ("The gross salary of the employee: %d", grosssalary);
    }
    return 0;
}