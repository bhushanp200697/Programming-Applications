//Accept number from user and display its reverse number

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

class program15
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        iRet = obj.Reverse();
        System.out.println("Reverse number is : "+iRet);
    }
}