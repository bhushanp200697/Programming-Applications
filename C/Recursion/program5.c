//Accept number from user and count the number of factors 

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    static int iCnt = 1;
    static int iFactCnt = 0;

    if(iCnt <= iNo)
    {
        if(iNo % iCnt == 0)
        {
            iFactCnt++;
        }
        iCnt++;

        CountFactor(iNo);
    }
    return iFactCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountFactor(iValue);

    printf("Number of factors are : %d\n",iRet);
    return 0;
}