#include <stdio.h>
void main()
{
    // declaring password and id variables
    int password, id;

    // printing a guiding message for the user and storing the input value as a decimal number in id variable
    printf("Please enter your ID: ");
    scanf("%d", &id);

    switch(id)
    {
        // checking ID to decide if he's Ahmed
        case 1234:

            // printing a guiding message for the user and storing the input value as a decimal number in id variable
            printf("Please enter your password: ");
            scanf("%d", &password);

            // checking Password to decide if he's Ahmed
            switch(password)
                {
                    case 20:
                        printf("Welcome Ahmed\n");
                        break;
                    default:
                        printf("Sorry Ahmed. Correct ID, Wrong Password\n");
                }
            break;

        // checking ID to decide if she's Sara
        case 4567:

            // printing a guiding message for the user and storing the input value as a decimal number in id variable
            printf("Please enter your password: ");
            scanf("%d", &password);

            // checking Password to decide if he's Sara
            switch(password)
                {
                    case 30:
                        printf("Welcome Sara\n");
                        break;
                    default:
                        printf("Sorry Sara. Correct ID, Wrong Password\n");
                }
            break;
        default:
            printf("Wrong ID. Please enter a valid one.\n");

    }


}
