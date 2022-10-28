//check whether the number is divisible by 3 & 5

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

    public boolean Check()
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

class program21
{
    public static void main(String arg[])
    {
        boolean bRet;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        bRet = obj.Check();
        if(bRet == true)
        {
            System.out.println("The enterd number is is divisible by 3 & 5");
        }
        else
        {
            System.out.println("The enterd number is not divisible by 3 & 5");
        }
    }
}