// Input : 78956
/*
    7   8   9   5   6
    7   8   9   5
    7   8   9
    7   8
    7
*/

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
        char Arr[] = (Integer.toString(iNo)).toCharArray();

        int i = 0;
        int j = 0;
        
        for( i = Arr.length-1; i >= 0; i--)
        {
            for( j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
            }
            System.out.println();
        }
       
    }
    
}

class program42
{
    public static void main(String arg[])
    { 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iValue = sobj.nextInt();

        PatternPrinting obj = new PatternPrinting(iValue);

        obj.Display();
    }
}