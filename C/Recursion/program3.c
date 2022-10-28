//Accept the number from user and display the addition of that number from 1 to that number.

// Input : 4
// Output : 10  (1+2+3+4)

// Input : 5
// Output : 15  (1+2+3+4+5)


#include <stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;
    static int iCnt = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        Summation(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n", iRet);

    return 0;
}