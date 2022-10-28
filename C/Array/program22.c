//Accept the N*N numbers from user and display that numbers

#include<stdio.h>

int main()
{
    int iRows = 0, iCols = 0;
    int i = 0, j = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iRows);

    printf("Enter the number of columns\n");
    scanf("%d",&iCols);

    int Arr[iRows][iCols];

    printf("Enter the values of array\n");

    for(i = 0; i < iRows; i++)
    {
        for(j = 0; j < iCols; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    for(i = 0; i < iRows; i++)
    {
        for(j = 0; j < iCols; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}