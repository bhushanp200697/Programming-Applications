//Accept number from user and check whether the bits in given range are ON or OFF

import java.util.*;
class Bitwise
{
    public boolean CheckBit(int iNo,int iFirst,int iLast)
    {
        long iMask1 = 0;
        long iMask2 = 0;
        long iMask = 0;
        long iResult = 0;

        iMask1 = 0xffffffff;
        iMask2 = 0xffffffff;

        iMask1 = iMask1 << (iFirst-1);
        iMask2 = iMask2 >> (32 - iLast);

        iMask = iMask1 & iMask2;    

        iResult = iNo & iMask;

        if(iResult == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}


class program15
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        System.out.println("Enter starting point");
        int iStart = sobj.nextInt();

        System.out.println("Enter ending point");
        int iEnd = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = bobj.CheckBit(iValue, iStart, iEnd);
        if(bRet == true)
        {
            System.out.println("Bits are on");
        }
        else
        {
            System.out.println("Bits are off");
        }
    }
}