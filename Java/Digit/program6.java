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

    public Digit(int x)
    {
        iNo = x;
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

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program6
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);

        obj.Display();

        obj.DisplayDigits();
    }
}