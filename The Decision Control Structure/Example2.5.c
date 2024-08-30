/*If the lengths of the three sides of a triangle are entered through the keyboard,
write a program to check whether teh triangle is valid or not.
The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/
 #include <stdio.h>
 
 int main(){
    int side1, side2, side3;
    printf ("Enter the three sides of the triangle: ");
    scanf ("%d %d %d", &side1, &side2, &side3);
    if (side1>=side2 && side1>=side3){
        if (side2+side3>=side1){
            printf ("The sides entered can form a triangle");
        }
        else {
            printf ("The sides entered cannot form a triangle");
        }
    }
    else if (side2>=side1 && side2>=side3){
        if (side1+side3>=side2){
            printf ("The sides entered can form a triangle");
        }
        else {
            printf ("The sides entered cannot form a triangle");
        }
    }
    else if (side3>=side2 && side3>=side1){
        if (side2+side1>=side3){
            printf ("The sides entered can form a triangle");
        }
        else {
            printf ("The sides entered cannot form a triangle");
        }
    }
    return 0;
 }