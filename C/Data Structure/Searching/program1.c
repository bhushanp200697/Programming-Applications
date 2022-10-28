//Linear Search

#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int Arr[], int iLength, int iSearch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0, iNo = 0, iRet = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

   printf("Enter elements : \n");
   for(iCnt = 0; iCnt < iSize; iCnt++ )
   {
        scanf("%d",&ptr[iCnt]);
   }

    printf("Enter the element that you want to search\n");
    scanf("%d",&iNo);

    iRet = LinearSearch(ptr, iSize, iNo);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("Element is there in the array at index :%d\n",iRet);
    }

    free(ptr);

    return 0;
}
