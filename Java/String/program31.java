//Accept the string from user and display the largest word

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

    public void DisplayWord()
    {
        String newstr = str.replaceAll("\\s+", " ");
        String newstr2 = newstr.trim();
        
        String Arr[] = newstr2.split(" ");
        
        System.out.println("The words are: ");

        int iMax = 0;
        int iPos = 0;

        for(int i =0; i < Arr.length; i++)
        {
            if(iMax < Arr[i].length())
            {
                iMax = Arr[i].length();
                iPos = i;
            }
        }
        System.out.println("Largest word is : "+Arr[iPos]);
    }
    
}

class program31
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayWord(); 

    }
}