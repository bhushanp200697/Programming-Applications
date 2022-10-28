//Accept the string from user and reverse that string

import java.util.*;

class Stringx
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        str = sobj.nextLine();
    }

    public void strrevX()
    {
        char Arr[] = str.toCharArray();

        int i = 0;

        System.out.println("String after revserse : ");

        for(i = Arr.length-1; i >= 0; i--)
        {
            System.out.print(Arr[i]);
        }      
    }
}

class program22
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.strrevX();
    }
}