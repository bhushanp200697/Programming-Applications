// Input : 79959
// Output : 3

/*
7+9+9+5+9       39

3 + 9                   12

1 + 2                   3

3
*/

#include<stdio.h>

int Addition(int iNo)
{
    int iCnt = 0;
    int iDigit = 0,iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(1)
    {
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        if(iSum > 10)
        {
            iNo = iSum;
            iSum = 0;
        }
        else
        {
            break;
        }
    }
    return iSum;
    
}

int  main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Addition(iValue);
    printf("Addition is: %d",iRet);

    return 0;
}