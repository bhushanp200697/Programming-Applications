//Accept number from user and check whether First nibble is ON or OFF

import java.util.*;

class Bitwise
{
    public boolean CheckNibble(int iNo)
    {
        int iMask = 0X0000000f;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program13
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = bobj.CheckNibble(iValue);
        if(bRet == true)
        {
            System.out.println("First nibble is completely on");
        }
        else
        {
            System.out.println("First nibble is off");
        }
    }
}