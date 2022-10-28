// Accept number from user and display that number from 1 to that number in forward and reverse direction

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

    public void DisplayF()
    {
        int iCnt = 0;

        System.out.println("Forward Display");

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println(iCnt);
        }
    }

    public void DisplayB()
    {
        int iCnt = 0;

        System.out.println("Backard Display");
        
        for (iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program48
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);

        obj.Display();

        obj.DisplayF();
        obj.DisplayB();
    }
}