#include <stdio.h>
void main()
{
    // Declaring char_decimal
    char char_decimal;


    // printing a guiding message for the user and storing the decimal representation of the input character in char_decimal
    printf("Please enter a character:  ");
    scanf("%c", &char_decimal);

    // Debugging message
    printf("%c in ASCII table is represented with %d decimal\n\n\n", char_decimal, char_decimal);

    // Checking if the decimal representation of the character is within the range of lower case alphabet or the upper case alphabet
    if ( (char_decimal >= 65 && char_decimal <= 90) || (char_decimal >= 97 && char_decimal <= 122) )
        {
            printf("%c is an alphabetical character.\n", char_decimal);
        }

    else
        {
            printf("%c is not an alphabetical character.\n", char_decimal);
        }

}
