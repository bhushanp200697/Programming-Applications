//Accept number from user and display addition of its digits

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

    public int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iSum =iSum +iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
}

class program9
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        iRet = obj.SumDigits();
        System.out.println("Addition of digits is: "+iRet);
    }
}