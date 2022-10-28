//Accept the string from user and display the frequency of each character

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

    public void DisplayFrequency()
    {
        char arr[] = str.toCharArray();

        int Frequency[] = new int[26];

        int i = 0;

        System.out.println("Frequency of each character is: ");

        for(i =0; i < arr.length; i++)
        {
            Frequency[arr[i] - 'a']++;
        }

        for(i = 0; i < Frequency.length; i++)
        {
            System.out.println(Frequency[i]);
        }

    }
    
}

class program35
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayFrequency(); 

    }
}