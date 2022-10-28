// Input : Hello
/*
    H
    H   e
    H   e   l
    H   e   l   l
    H   e   l   l   o
*/

import java.util.*;

class PatternPrinting
{
    public String str;

    public PatternPrinting(String x)
    {
        str = x;
    }

    public void Display()
    {
        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
            }
            System.out.println();
        }
    }
    
}

class program37
{
    public static void main(String arg[])
    { 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        PatternPrinting obj = new PatternPrinting(str);

        obj.Display();
    }
}