// Accept number from user and check whether the number is perfect or not

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

    public boolean CheckPerfect()
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; ((iCnt <= (iNo /2)) && (iSum <= iNo)); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program43
{
    public static void main(String arg[])
    {
        boolean bRet;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        bRet = obj.CheckPerfect();
        if(bRet == true)
        {
            System.out.println("The number is perfect number");
        }
        else
        {
            System.out.println("The number is not a perfect number");
        }
    }
}