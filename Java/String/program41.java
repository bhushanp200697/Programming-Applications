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
        int Frequency1[] = new int[26];

        char brr[] = str2.toCharArray();
        int Frequency2[] = new int[26];

        if(str1.length() != str2.length())
        {
            return false;
        }

        int i = 0;

        for(i = 0; i < arr.length; i++)
        {
            Frequency1[arr[i] - 'a']++;
            Frequency2[brr[i] - 'a']++;
        }

        for(i = 0; i < Frequency1.length; i++)
        {
            if(Frequency1[i] != Frequency2[i])
            {
                break;
            }
        }
        if(i == 26)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    
}

class program41
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