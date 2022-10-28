//Display the common bits which are ON

import java.util.*;

class Bitwise
{
    public void DisplayBits(int iNo1,int iNo2)
    {
        int iNo = 0;
        int iMask = 0X00000001;
        int iResult = 0;

        iNo = iNo1 & iNo2;

        System.out.println("The ON bits are");

        for(int i = 1; i <= 32; i++)
        {
            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                System.out.println(i);
            }
            iMask = iMask << 1;
        }
    }
}

class program19
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number");
        int iValue2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        bobj.DisplayBits(iValue1,iValue2);
    }
}