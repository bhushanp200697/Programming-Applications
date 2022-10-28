// Accept number from user and display that number from 1 to that number in forward and reverse direction

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

class program47
{
    public static void main(String arg[])
    {
        Number obj = new Number();

        obj.Accept();
        obj.Display();

        obj.DisplayF();
        obj.DisplayB();
    }
}