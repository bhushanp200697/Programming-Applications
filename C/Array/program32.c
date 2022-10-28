//Accept the N*N elements from user and check whether the given element is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int iRows, int iCols,int iValue,int Arr[iRows][iCols])
{
    int i = 0, j = 0;

    for(i = 0; i < iRows; i++)
    {
        for(j = 0; j < iCols; j++)
        {
            if(Arr[i][j] == iValue)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iNo = 0;
    bool bRet;

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

    printf("Enter the element to search\n");
    scanf("%d",&iNo);

    bRet = Search(iValue1,iValue2,iNo,ptr);
    if(bRet == true)
    {
        printf("Element is there in array\n");
    }
    else
    {
        printf("Element is not there in array\n");
    }

    return 0;
}