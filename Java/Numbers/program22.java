//check whether the number is divisible by 3 & 5

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

    public boolean CheckEven()
    {
        if(((iNo % 3) == 0) && ((iNo % 5) == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program22
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

        bRet = obj.CheckEven();
        if(bRet == true)
        {
            System.out.println("The enterd number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("The enterd number is not divisible by 3 & 5");
        }
    }
}