//Accept number from user and display its reverse number

import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int x)
    {
        iNo = x;
    }

    public void Display()
    {
        System.out.println("The number is: "+this.iNo);
    }

    public int Reverse()
    {
        int iDigit = 0;
        int iRev = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 +iDigit;
            iNo = iNo /10;
        }
        return iRev;
    }
}

class program16
{
    public static void main(String arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);

        obj.Display();

        iRet = obj.Reverse();
        System.out.println("Reverse number is : "+iRet);
    }
}