//Display which bits are ON

import java.util.*;

class Bitwise
{
    public void DisplayBits(int iNo)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        
        System.out.println("ON bits are:\n");

        for(int i = 1; i <= 32;i++)
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

class program16
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        bobj.DisplayBits(iValue);

    }
}