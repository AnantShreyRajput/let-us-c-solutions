/*The marks obtained by a student in 5 different subjects are input through the keyboard. 
The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.*/
#include <stdio.h>

int main(){
    int english, hindi, mathematics, generalscience, socialscience, sanskrit, computerscience, totalscore;
    float  percentage;
    printf ("Enter the marks obtained by student in english: ");
    scanf ("%d", &english);
    printf ("Enter the marks obtained by student in hindi: ");
    scanf ("%d", &hindi);
    printf ("Enter the marks obtained by student in mathematics: ");
    scanf ("%d", &mathematics);
    printf ("Enter the marks obtained by student in general science: ");
    scanf ("%d", &generalscience);
    printf ("Enter the marks obtained by student in social science: ");
    scanf ("%d", &socialscience);
    printf ("Enter the marks obtained by student in sanskrit: ");
    scanf ("%d", &sanskrit);
    printf ("Enter the marks obtained by student in computer science: ");
    scanf ("%d", &computerscience);
    totalscore= english+hindi+mathematics+generalscience+socialscience+sanskrit+computerscience;
    printf ("Total marks scored by the student: %d\n", totalscore);
    percentage = totalscore/7;
    printf ("Total percentage scored by the student: %.2f\n", percentage);
    if (percentage>=60){
        printf ("The student scored FIRST DIVISION\n");
    }
    else if (percentage>=50 && percentage<60){
        printf ("The student scored SECOND DIVISION\n");
    }
    else if (percentage>=40 && percentage<50){
        printf ("The student scored THIRD DIVISION\n");
    }
    else {
        printf ("The student FAILED\n");
    }
    return 0;
}