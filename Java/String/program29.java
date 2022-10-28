//Accept the string from user and count number of words in it

import java.util.*;

class Stringx
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        str = sobj.nextLine();
    }

    public void CountWords()
    {
        String newstr = str.replaceAll("\\s+", " ");
        String newstr2 = newstr.trim();
        
        String Arr[] = newstr2.split(" ");
        
        System.out.println("The words are: ");

        for(int i =0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
    
}

class program29
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.CountWords(); 
    }
}