//Accept the string from user and display the frequency of maximum character

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

    public void DisplayMax()
    {
        str = str.toLowerCase();

        char arr[] = str.toCharArray();
        int Frequency[] = new int[26];

        int i = 0;

        for(i =0; i < arr.length; i++)
        {
            Frequency[arr[i] - 'a']++;
        }

        int iMax = 0;
        int iPos = 0;

        for(i = 0; i < Frequency.length; i++)
        {
            if(Frequency[i] > iMax)
            {
                iMax = Frequency[i];
                iPos = i;
            }
        }
        System.out.println((char)(iPos + 'a') + " occurs " + iMax +" number of times in the word");

    }
    
}

class program38
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayMax(); 

    }
}