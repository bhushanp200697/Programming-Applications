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
        String Arr[] = str.split(" ");
        
        return Arr.length;
    }
    
}

class program26
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