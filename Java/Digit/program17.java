//Accept number from user and check whether that number is pallindrome or not

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

    public boolean CheckPallindrome()
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iTemp = iNo;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 +iDigit;
            iNo = iNo /10;
        }
        
        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program17
{
    public static void main(String arg[])
    {
        boolean bRet;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        bRet = obj.CheckPallindrome();
        if(bRet == true)
        {
            System.out.println("The number is pallindrome number");
        }
        else
        {
            System.out.println("The number is not pallindrome number");
        }
    }
}