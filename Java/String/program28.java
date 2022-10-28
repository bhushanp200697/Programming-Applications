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

    public int CountWords()
    {
        String newstr = str.replaceAll("\\s+", " ");
        String newstr2 = newstr.trim();
        
        String Arr[] = newstr2.split(" ");
        
        return (Arr.length);
    }
    
}

class program28
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.CountWords();
        System.out.println("Number of words are : "+iRet);  
    }
}