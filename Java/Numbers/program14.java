// Write a program to perform addition of 2 numbers

import java.util.*;

class Number
{
    public int iNo1;
    public int iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number");
        iNo2 = sobj.nextInt();
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

class program14
{
    public static void main(String b[])
    {
        int iRet = 0;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        iRet = obj.Addition();
        System.out.println("Addition is: "+iRet);
    }
}