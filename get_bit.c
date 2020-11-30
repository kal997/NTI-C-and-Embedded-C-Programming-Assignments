#include <stdio.h>
void main()
{

    // declaring idx, num and bit for the main problem
    // declaring reminder and assign index to 0 for demonstration purposes
    int idx, bit, num, remainder, index = 0;
    printf("Please enter a number in decimal: ");
    scanf("%d", &num);

    printf("Please enter the bit index you wish to get: ");
    scanf("%d", &idx);

    bit = (num >> idx) & 0x01;
    printf("bit = %d\n\n", bit);



    // converting the input decimal to binary
    printf("%d binary is:\n", num);
    if (0 == num) printf("idx : %d -->  %d\n", 0, 0);     // checks for corner case --> if input=0
    else if (1 == num) printf("idx : %d -->  %d\n", 0, 1);// checks for corner case --> if input=1
    // this following lines of code mimics the conversion of decimal to binary by hands
    else
        {
        while(1)
            {
            if(0 == num/2)
                {
                    printf("idx : %d -->  %d\n", index, 1);
                    break;
                }
            else
                {
                    remainder = num%2;
                    printf("idx : %d -->  %d\n", index, remainder);
                    num /= 2;
                    index += 1;
                }

            }
        }

}
