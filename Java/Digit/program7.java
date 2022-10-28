//Accept number from user and count its digits

import java.util.*;

class Digit
{
    public int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("The number is: "+this.iNo);
    }

    public int CountDigits()
    {
        int iDigit = 0;
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class program7
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        iRet = obj.CountDigits();
        System.out.println("Number of digits are: "+iRet);
    }
}