// check whether the number is even or not

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

    public int CheckEven()
    {
        if((iNo % 2) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

class program20
{
    public static void main(String arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);

        obj.Display();

        iRet = obj.CheckEven();
        if(iRet == 1)
        {
            System.out.println("The enterd number is even");
        }
        else
        {
            System.out.println("The enterd number is odd");
        }
    }
}