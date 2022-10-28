// Program to display 5 times Hello on screen

import java.util.*;

class Number
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            System.out.println("Please enter positive value");
            return;
        }

        for(iCnt = 1; iCnt <= iNo; ++iCnt)
        {
            System.out.println("Hello");
        }
    }
}

class program8
{
    public static void main(String b[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Number obj = new Number();

        obj.Display(iValue);
    }
}