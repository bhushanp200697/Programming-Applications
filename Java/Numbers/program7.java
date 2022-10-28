// Program to display 5 times Hello on screen

import java.util.*;

class Number
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; ++iCnt)
        {
            System.out.println("Hello");
        }
    }
}

class program7
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