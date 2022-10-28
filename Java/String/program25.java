//Accept two string from user and compare that strings

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

    public boolean strcmpX()
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        if(Arr.length != Brr.length)
        {
            return false;
        }

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != Brr[i])
            {
                return false;
            }
        }
        return true;        
    }
}

class program25
{
    public static void main(String arg[])
    {
        boolean bRet;

        Stringx obj = new Stringx();

        obj.Accept();

        bRet = obj.strcmpX();
        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}