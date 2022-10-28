//Accept number from user and display its digits

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

import java.util.*;

class Digit
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
        System.out.println("The number is: "+this.iNo);
    }

    public void DisplayDigits()
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program3
{
    public static void main(String arg[])
    {
        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        obj.DisplayDigits();
    }
}