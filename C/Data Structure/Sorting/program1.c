//Bubble Sort

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void BubbleSort(int Arr[], int iLength)
{
    int i = 0, j = 0, temp = 0;

    bool Swap = false;

    for(i = 0; i < iLength; i++)
    {
        Swap = false;

        for(j = 0; j < iLength-i-1; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                
                Swap = true;
            }
        }

        if(Swap == false)
        {
            break;
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

    BubbleSort(ptr, iSize);
    printf("Data after sorting\n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}
