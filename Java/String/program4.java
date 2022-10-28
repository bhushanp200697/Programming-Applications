//Accept the string and display each character

import java.util.*;

class Stringx
{
    public String str;

    public void Accept()
    {
        str = "Hello";
    }

    public void Display()
    {
        char Arr[] = str.toCharArray();

        int i = 0;

        while(i < Arr.length)
        {
            System.out.println(Arr[i]);
            i++;
        }
    }
}

class program4
{
    public static void main(String arg[])
    {   
        Stringx obj = new Stringx();

        obj.Accept();
        obj.Display();
    }
}