// Input :  Row 4   Columns     4
/*
    $   2   3   4
    1   $   3   4
    1   2   $   4
    1   2   3   $
*/

import java.util.*;

class PatternPrinting
{
    public int iRow;
    public int iCol;

    public PatternPrinting(int x, int y)
    {
        iRow = x;
        iCol = y;
    }

    public void Display()
    {
        if(iRow != iCol)
        {
            System.out.println("Invalid input");
            return;
        }

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print(j +"\t");
                }
            }
            System.out.println();
        }
    }
}

class program14
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iValue2 = sobj.nextInt();

        PatternPrinting obj = new PatternPrinting(iValue1,iValue2);

        obj.Display();
    }
}