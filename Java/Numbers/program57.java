// Accept number from user and check whether number is prime or not

import java.util.*;

class Number
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
        System.out.println("The numbers is: "+this.iNo);
    }

    public int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for (iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFactCnt++;
            }
        }
        return iFactCnt;
    }

    public boolean CheckPrime()
    {
        int iRet = 0;
        iRet = CountFactor();

        if (iRet == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program57
{
    public static void main(String arg[])
    {
        boolean bRet;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        bRet = obj.CheckPrime();
        if(bRet == true)
        {
            System.out.println("The number is prime number");
        }
        else
        {
            System.out.println("The number is not a prime number");
        }
    }
}