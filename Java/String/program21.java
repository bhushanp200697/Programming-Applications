//Accept the string from user and toggle that string 

import java.util.*;

class Stringx
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        str = sobj.nextLine();
    }

    public void strtoggleX()
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        int ascii = 0;
        char ch = '\0';

        for(i = 0; i < Arr.length; i++)
        {
            if( (Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {  
                ch = Arr[i];
                ascii = ch;
                ascii = ascii + 32;
                ch = (char)ascii;
                Arr[i] = ch;
            }
            else if( (Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {  
                ch = Arr[i];
                ascii = ch;
                ascii = ascii - 32;
                ch = (char)ascii;
                Arr[i] = ch;
            }
        }

        System.out.print("String after toggle : ");

        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]);
        }        
    }
}

class program21
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.strtoggleX();
    }
}