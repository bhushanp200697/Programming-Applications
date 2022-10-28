//Accept the string from user and check whether the Strings are anagram or not

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

    public boolean CheckAnagram()
    {
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char arr[] = str1.toCharArray();
        char brr[] = str2.toCharArray();

        Arrays.sort(arr);
        Arrays.sort(brr);

        if(Arrays.equals(arr,brr))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    
}

class program43
{
    public static void main(String arg[])
    {
        boolean bRet;

        Stringx obj = new Stringx();

        obj.Accept();

        bRet = obj.CheckAnagram(); 
        if(bRet == true)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }

    }
}