// Accept number from user and display its factors addition

// Input :     10
// Output :    8

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

    public int SumFactors()
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class program35
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        iRet = obj.SumFactors();
        System.out.println("Addition of factors is: "+iRet);
    }
}