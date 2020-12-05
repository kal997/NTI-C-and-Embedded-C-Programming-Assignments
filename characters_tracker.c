#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    int i, vowels = 0, consonants = 0, digits = 0, white_spaces = 0;
    char sentence[MAX];
    printf("Please enter a sentence (NOTE: maximum number of characters is 100): \n");
    fgets(sentence, MAX-1, stdin);

    printf("the input sentence is: \n");
    puts(sentence);
    strlwr(sentence);
    for(i=0 ; i<strlen(sentence); i++)
    {
     if (sentence[i] >= 48 && sentence[i] <=57) digits++;
     else if (sentence[i] >=97 && sentence[i] <= 122)
        {
         if (97 == sentence[i] || 101 == sentence[i] || 105 == sentence[i] || 117 == sentence[i] || 111 == sentence[i]) vowels++;
         else consonants ++;
        }
     else if (32 == sentence[i]) white_spaces++;
    }

    printf("\nvowels = %d\nconsonants = %d\nwhite spaces = %d\ndigits = %d\n", vowels, consonants, white_spaces, digits);



}
