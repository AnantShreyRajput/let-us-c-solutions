/*Write a program to calculate the salary as per the following table:
 ______________________________________________________________
|GENDER   |YEARS OF SERVICE  |QUALIFICATION      |SALARY       |
|_________|__________________|___________________|_____________|
|MALE     |>=10              |POST GRADUATE      |15000        |
|MALE     |>=10              |GRADUATE           |10000        |
|MALE     |<10               |POST GRADUATE      |10000        |
|MALE     |<10               |GRADUATE           |7000         |
|_________|__________________|___________________|_____________|
|FEMALE   |>=10              |POST GRADUATE      |12000        |
|FEMALE   |>=10              |GRADUATE           |9000         |
|FEMALE   |<10               |POST GRADUATE      |10000        |
|FEMALE   |<10               |GRADUATE           |6000         |
|_________|__________________|___________________|_____________|
*/
 #include <stdio.h>
 
 int main(){
    int yearsofservice, salary;
    char gender, qualification;
    printf ("Enter the gender of the employee (m/f): ");
    scanf (" %c", &gender);
    printf ("Enter the year of service of the employee: ");
    scanf ("%d", &yearsofservice);
    printf ("Enter the qualification of the employee (p/g): ");
    scanf (" %c", &qualification);
    if (gender=='m' && yearsofservice>=10 && qualification=='p'){
        printf ("SALARY OF THE EMPLOYEE: 15000");       
    }
    else if (gender=='m' && yearsofservice>=10 && qualification=='g'){
        printf ("SALARY OF THE EMPLOYEE: 10000");       
    }
    else if (gender=='m' && yearsofservice<10 && qualification=='p'){
        printf ("SALARY OF THE EMPLOYEE: 10000");       
    }
    else if (gender=='m' && yearsofservice<10 && qualification=='g'){
        printf ("SALARY OF THE EMPLOYEE: 7000");       
    }
    else if (gender=='f' && yearsofservice>=10 && qualification=='p'){
        printf ("SALARY OF THE EMPLOYEE: 12000");       
    }
    else if (gender=='f' && yearsofservice>=10 && qualification=='g'){
        printf ("SALARY OF THE EMPLOYEE: 9000");       
    }
    else if (gender=='f' && yearsofservice<10 && qualification=='p'){
        printf ("SALARY OF THE EMPLOYEE: 10000");       
    }
    else if (gender=='f' && yearsofservice<10 && qualification=='g'){
        printf ("SALARY OF THE EMPLOYEE: 6000");       
    }
    else {
        printf ("The information entered through the keyboard is invalid.\nEnter the information again.\n");
    }
    return 0;
 }