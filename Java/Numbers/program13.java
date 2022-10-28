// Write a program to perform addition of 2 numbers

import java.util.*;

class Number
{
    public int iNo1;
    public int iNo2;

    public Number(int x, int y)
    {
        iNo1 = x;
        iNo2 = y;
    }

    public void Display()
    {
        System.out.println("The numbers are");
        System.out.println(this.iNo1);
        System.out.println(this.iNo2);
    }

    public int Addition()
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;

        return iAns;
    }
}

class program13
{
    public static void main(String b[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number");
        iValue2 = sobj.nextInt();

        Number obj = new Number(iValue1, iValue2);

        obj.Display();

        iRet = obj.Addition();
        System.out.println("Addition is: "+iRet);
    }
}