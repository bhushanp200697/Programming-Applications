//Accept the string from user and display that string in uppercase

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

    public void struprX()
    {
        System.out.print("String in upper case : "+str.toUpperCase());        
    }
}

class program20
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.struprX();
    }
}