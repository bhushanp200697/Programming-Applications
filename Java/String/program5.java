//Accept the string and display each character

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

    public void Display()
    {
        char Arr[] = str.toCharArray();

        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class program5
{
    public static void main(String arg[])
    {   
        Stringx obj = new Stringx();

        obj.Accept();
        obj.Display();
    }
}