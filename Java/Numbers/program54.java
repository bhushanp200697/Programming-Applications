//Accept number from user and count the number of factors 

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
}

class program54
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

        iRet = obj.CountFactor();
        System.out.println("Number of factors are: "+iRet);
    }
}