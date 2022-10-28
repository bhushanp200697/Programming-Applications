//Accept the N*N elements from user and display addition of each row elements

#include<stdio.h>
#include<stdlib.h>

void SumRow(int iRows, int iCols,int Arr[iRows][iCols])
{
    int iSum = 0;

    for(int i = 0; i < iRows; i++)
    {
        for(int j = 0; j < iCols; j++)
        {
            iSum = iSum + Arr[i][j];
        }
        printf("Addition of %d row is: %d\n",(i+1), iSum);
        iSum = 0;
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
    
    SumRow(iValue1,iValue2,ptr);

    return 0;
}