// Accept number from user and check whether number is prime or not

import java.util.*;

class Number
{
    public int iNo;

    public Number(int x)
    {
        iNo = x;
    }

    public void Display()
    {
        System.out.println("The numbers is: "+this.iNo);
    }

    public int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

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

class program56
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean bRet;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);

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