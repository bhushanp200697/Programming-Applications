//Accept the N*N elements from user and display maximum elements

#include<stdio.h>
#include<stdlib.h>

int Maximum(int iRows, int iCols,int Arr[iRows][iCols])
{
    int iMax = Arr[0][0];

    for(int i = 0; i < iRows; i++)
    {
        for(int j = 0; j < iCols; j++)
        {
            if(iMax <= Arr[i][j])
            {
                iMax = Arr[i][j];
            }
        }
    }
    return iMax;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

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
    
    iRet = Maximum(iValue1,iValue2,ptr);
    printf("Maximum elements is: %d\n",iRet);

    return 0;
}