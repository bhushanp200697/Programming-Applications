//Display how many common bits are ON

import java.util.*;

class Bitwise
{
    public int CountBits(int iNo1,int iNo2)
    {
        int iNo = 0;
        int iCnt = 0;
        int iMask = 0X00000001;
        int iResult = 0;

        iNo = iNo1 & iNo2;

        for(int i = 1; i <= 32; i++)
        {
            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                iCnt++;
            }
            iMask = iMask << 1;
        }
        return iCnt;
    }
}

class program18
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number");
        int iValue2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.CountBits(iValue1,iValue2);

        System.out.println("Number of ON bits are : "+iRet);
    }
}