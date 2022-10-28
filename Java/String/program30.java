//Accept the string from user and display the length of largest word

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

    public int Countlength()
    {
        String newstr = str.replaceAll("\\s+", " ");
        String newstr2 = newstr.trim();
        
        String Arr[] = newstr2.split(" ");
        
        System.out.println("The words are: ");

        int iMax = 0;

        for(int i =0; i < Arr.length; i++)
        {
            if(iMax < Arr[i].length())
            {
                iMax = Arr[i].length();
            }
        }
        return iMax;
    }
    
}

class program30
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.Countlength(); 
        System.out.println("Length of largest word is : "+iRet);
    }
}