//Accept the N*N numbers from user and display that numbers

#include<stdio.h>
#include<stdlib.h>

void Display(int iRows, int iCols,int Arr[iRows][iCols])
{
    printf("Elements of array are:\n");
    
    for(int i = 0; i < iRows; i++)
    {
        for(int j = 0; j < iCols; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    int (*ptr)[iValue1] = NULL;
    ptr = (int (*)[iValue2])malloc(iValue1 * iValue2 * sizeof(int));

    printf("Enter the values of array\n");

    for(int i = 0; i < iValue1; i++)
    {
        for(int j = 0; j < iValue2; j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    
    Display(iValue1,iValue2,ptr);

    return 0;
}