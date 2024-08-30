/*Write a program to check whether a triangle is valid or not, 
if three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of the three angles to 180 degrees.*/
 #include <stdio.h>
 
 int main(){
    int ang1, ang2, ang3, totalangle;
    printf ("Enter the angles of the triangle: ");
    scanf ("%d %d %d", &ang1 ,&ang2 ,&ang3);
    totalangle = ang1+ang2+ang3;
    if (totalangle==180){
        printf ("The angles entered through the keyboard can form a triangle.\n");
    }
    else {
        printf ("The angles entered through the keyboard cannot form a triangle.\n");
    }
    return 0;
 }