// check whether the number is even or not

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

class program19
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Number obj = new Number();

        obj.Accept();
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