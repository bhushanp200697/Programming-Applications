// Input :    5
// Output :   5   *   4   *   3   *   2   *   1   *

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

        for(iCnt = iNo;iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt +"\t"+"*\t");
        }
    }
}

class program4
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