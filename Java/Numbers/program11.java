// Program to display 1 to N numbers on screen

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
        int iCnt = 0;

        if(iNo < 0)      
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println(iCnt);
        }
    }
}

class program11
{
    public static void main(String b[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);

        obj.Display();
    }
}