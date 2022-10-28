//Binary Search

#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int Arr[], int iLength, int iSearch)
{
    int iStart = 0;
    int iEnd = iLength-1;
    int iMiddle = 0;

    while(iStart <= iEnd)
    {
        iMiddle = (iStart +iEnd)/2;

        if(Arr[iMiddle] == iSearch)
        {
            break;
        }
        else if(iSearch > Arr[iMiddle])
        {
            iStart = iMiddle + 1;
        }
        else if(iSearch < Arr[iMiddle])
        {
            iEnd = iMiddle - 1;
        }
    }
    if(Arr[iMiddle] == iSearch)
    {
        return iMiddle;
    }
    else
    {
        return -1;
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

    iRet = BinarySearch(ptr, iSize, iNo);
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
