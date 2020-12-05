#include <stdio.h>
void Display(char matrix[2][2]);
void main()
{
    int i, j;
    char arr1[2][2] = {{1,4},{2,10}};
    char arr2[2][2] = {2,3,4,5};
    char add[2][2], multi[2][2] = {0};

    /*
    multi[0][0] = arr1[0][0] * arr2[0][0] + arr1[0][1] * arr2[1][0];
    multi[0][1] = arr1[0][0] * arr2[0][1] + arr1[0][1] * arr2[1][1];
    multi[1][0] = arr1[1][0] * arr2[0][0] + arr1[1][1] * arr2[1][0];
    multi[1][1] = arr1[1][0] * arr2[0][1] + arr1[1][1] * arr2[1][1];
    */

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
            // we can derive the following expression from the 4 equations above.
            multi[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[1][j];
        }
    }
    printf("arr1 . arr2 = \n");
    Display(multi);
    printf("arr1 + arr2 = \n");
    Display(add);

}

void Display(char matrix[2][2])
{
    int i, j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
          printf("%d    ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}//Display



