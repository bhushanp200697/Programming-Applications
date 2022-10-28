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

    public boolean CheckPrime()
    {
        int iCnt = 0;

        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                break;
            }
        }

        if (iCnt == (iNo / 2) + 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program59
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