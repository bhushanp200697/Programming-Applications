// Input :  Row 4   Columns    4
/*

    A
    B   B
    C   C   C
    D   D   D   D

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
        int i = 0;
        int j = 0;
        char ch = '\0';

        if(iRow != iCol)
        {
            System.out.println("Invalid input");
            return;
        }
        
        for( i = 1, ch = 'A'; i <= iRow; i++,ch++)
        {
            for( j = 1; j <= i; j++)
            {
                System.out.print(ch +"\t");
            }
            System.out.println();
        }
    }
    
}

class program27
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