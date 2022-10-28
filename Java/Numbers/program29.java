// Accept number from user and display its factors

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

    public void DisplayFactors()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        System.out.println("The factors are: ");

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program29
{
    public static void main(String arg[])
    {
        Number obj = new Number();

        obj.Accept();
        obj.Display();

        obj.DisplayFactors();
    }
}