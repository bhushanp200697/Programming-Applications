//Accept the number from user and display the addition of that number from 1 to that number.

// Input : 4
// Output : 10  (1+2+3+4)

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

    public int Addition()
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
}

class program16
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

        iRet = obj.Addition();
        System.out.println("Addition is: "+iRet);
    }
}