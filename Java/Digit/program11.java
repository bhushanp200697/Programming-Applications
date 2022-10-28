//Accept number from user and display its even digits

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

    public void DisplayEven()
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        System.out.println("Even digits are:");

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                System.out.println(iDigit);
            }
            iNo = iNo / 10;
        }
    }
}

class program11
{
    public static void main(String arg[])
    {
        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        obj.SumDigits();
    }
}