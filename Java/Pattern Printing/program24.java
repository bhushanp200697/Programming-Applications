// Input :  Row 4   Columns    4
/*

    a   b   c   d
    a   b   c   d
    a   b   c   d
    a   b   c   d

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
        
        for( i = 1; i <= iRow; i++)
        {
            for( j = 1, ch = 'a'; j <= iCol; j++,ch++)
            {
                System.out.print(ch +"\t");
            }
            System.out.println();
        }
    }
    
}

class program24
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