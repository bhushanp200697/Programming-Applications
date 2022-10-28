// Input :   4
// Output :  1   2   3   4   4   3   2   1

import java.util.*;

class PatternPrinting
{
    public int iNo;

    public PatternPrinting(int x)
    {
        iNo = x;
    }

    public void Display()
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt +"\t");
        }

        for(iCnt = iNo;iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt +"\t");
        }
    }
}

class program5
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        PatternPrinting obj = new PatternPrinting(iValue);

        obj.Display();
    }
}