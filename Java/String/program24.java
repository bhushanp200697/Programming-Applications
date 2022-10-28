//Accept two string from user and concat first string after the second string

import java.util.*;

class Stringx
{
    public String str1;
    public String str2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        str1 = sobj.nextLine();

        System.out.println("Enter second string");
        str2 = sobj.nextLine();
    }

    public void strcatX()
    {
        String str3 = str1.concat(str2);

        System.out.println("String after concatination : "+str3);
        
    }
}

class program24
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.strcatX();
    }
}