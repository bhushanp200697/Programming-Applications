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

    public boolean CheckEven()
    {
        if((iNo % 2) == 0)
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

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        bRet = obj.CheckEven();
        if(bRet == true)
        {
            System.out.println("The enterd number is even");
        }
        else
        {
            System.out.println("The enterd number is odd");
        }
    }
}