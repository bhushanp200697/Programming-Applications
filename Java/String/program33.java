//Accept the string from user and reverse each word

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

    public void DisplayReverse()
    {
        String newstr = str.replaceAll("\\s+", " ");
        String newstr2 = newstr.trim();
        
        String Arr[] = newstr2.split(" ");

        StringBuffer finalstr = new StringBuffer();
        
        //System.out.println("The reverse words are: ");

        for(int i =0; i < Arr.length; i++)
        {
            StringBuffer sb = new StringBuffer(Arr[i]);
            finalstr.append((sb.reverse()).append(" "));
        }

        String finalstr2 = new String(finalstr);
        System.out.println(finalstr2.trim());
    }
    
}

class program33
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayReverse(); 

    }
}