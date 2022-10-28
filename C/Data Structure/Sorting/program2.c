//Selection Sort

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

void SelectionSort(int Arr[], int iLength)
{
    int i = 0, j = 0, min_index = 0, temp = 0;

    for(i = 0; i < iLength-1; i++)
    {
        min_index = i;

        for(j = i+1; j < iLength; j++)
        {
            if(Arr[min_index] > Arr[j])
            {
                min_index = j;
            }
        }
        if(i != min_index)
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp;
        }

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

    SelectionSort(ptr, iSize);
    printf("Data after sorting\n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}
