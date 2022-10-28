//Accept the string from user and copy that string into another string

import java.util.*;

class Stringx
{
    public String src;
    public String dest;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        src = sobj.nextLine();
    }

    public void strcpyX()
    {
        System.out.println("String after copy : ");

        dest = src;
        
        System.out.print(dest);     
    }
}

class program23
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.strcpyX();
    }
}