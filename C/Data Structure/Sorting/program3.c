//Insertion Sort

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    
    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

void InsertionSort(int Arr[], int iLength)
{
    int i = 0, j= 0, selected = 0;

    for(i = 1; i < iLength; i++)
    {
        for(j = i-1, selected = Arr[i]; (j >=0) && (Arr[j] > selected) ;j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

   printf("Enter elements : \n");
   for(iCnt = 0; iCnt < iSize; iCnt++ )
   {
        scanf("%d",&ptr[iCnt]);
   }

   Display(ptr, iSize);

    InsertionSort(ptr, iSize);
    printf("Data after sorting\n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}
