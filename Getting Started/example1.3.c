/*If the marks obtained by the student in five different subjects are input through the keyboard,
write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/
#include <stdio.h>

int main(){
    int english, hindi, mathematics, socialscience, generalscience, sanskrit, computerscience, totalmarks;
    float averagemarks;
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
    totalmarks = english+hindi+mathematics+generalscience+socialscience+sanskrit+computerscience;
    averagemarks = (english+hindi+mathematics+generalscience+socialscience+sanskrit+computerscience)/7;
    printf ("Total marks obtained by student is: %d\n", totalmarks);
    printf ("Average marks obtained by student is: %.2f\n", averagemarks);
    return 0;
}