#include <stdio.h>
#include <string.h>
#define MAX 200

void main()
{
    int i;
    char sentence[MAX], sentence_cp[MAX];
    printf("Please enter a sentence (NOTE: maximum number of characters is 200): \n");
    fgets(sentence, MAX-1, stdin);

    printf("the input sentence is: \n");
    puts(sentence);

    strlwr(strcpy(sentence_cp, sentence)); // making a lower case copy of the sentence to make the check range narrower
    // also we will use the original sentence to grab the upper case version of a letter (if existing in the original one)

    for(i=0 ; i<strlen(sentence); i++)
    {
     if (sentence_cp[i] >= 97 && sentence_cp[i] <=122) sentence_cp[i] = sentence[i];
     else if (32 == sentence_cp[i]);
     else sentence_cp[i] = 32;
    }
    printf("The result sentence is: \n");
    puts(sentence_cp);
}

