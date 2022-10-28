//Accept the N numbers from user and display the addition of that elements

#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the values of array\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr,iLength);
    printf("Addition is: %d",iRet);

    free(ptr);

    return 0;
}