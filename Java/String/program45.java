//Accept the string from user and check whether the Strings are in rotation or not

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

        System.out.println("Enter second string : ");
        str2 = sobj.nextLine();
    }

    public boolean CheckRotation()
    {
        if(str1.length() != str2.length())
        {
            return false;
        }

        String str3 = str1 + str1;

        if(str3.contains(str2))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    
}

class program45
{
    public static void main(String arg[])
    {
        boolean bRet;

        Stringx obj = new Stringx();

        obj.Accept();

        bRet = obj.CheckRotation(); 
        if(bRet == true)
        {
            System.out.println("Strings are in rotation");
        }
        else
        {
            System.out.println("Strings are not in rotation");
        }

    }
}