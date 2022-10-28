//Accept the string from user and display that string in lowercase

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

    public void strlwrX()
    {
        System.out.print("String in lower case : "+str.toLowerCase());        
    }
}

class program18
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.strlwrX();
    }
}