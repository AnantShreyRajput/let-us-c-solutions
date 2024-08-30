/*If a character is entered through the keyboard, 
write a program to determine whether the character is a capital letter, 
a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters:
 ___________________________________________________
|Characters            |ASCII Value                 |
|______________________|____________________________|
|A-Z                   |65-90                       |
|a-z                   |97-122                      |
|0-9                   |48-57                       |
|special symbols       |0-47, 58-64, 91-96, 123-127 |
|______________________|____________________________|
*/
#include <stdio.h>

int main(){
    char character;
    printf ("Enter the character through the keyboard: ");
    scanf (" %c", &character);
    if (character>=65 && character<=90){
        printf ("The character %c entered through the keyboard is an uppercase alphabet.", character);
    }
    else if (character>=97 && character<=122){
        printf ("The character %c entered through the keyboard is a lowercase alphabet.", character);
    }
    else if (character>=48 && character<=57){
        printf ("The character %c entered through the keyboard is a number.", character);
    }
    else if ((character>=0 && character<=47) || (character>=58 && character<=64) || (character>=91 && character<=96) || (character>=123 && character<=127)){
        printf ("The character %c entered through the keyboard is a special character.", character);
    }
    else {
        printf ("The character entered through the keyboard is an invalid character.");
    }
    return 0;
}