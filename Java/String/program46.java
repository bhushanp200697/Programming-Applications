//Accept the string from user and Display the frequency of each character

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
        char Arr[] = str.toCharArray();

        HashMap<Character, Integer> hobj = new HashMap<>();
        int Frequency = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch, Frequency + 1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }
        System.out.println(hobj);
    }
    
}

class program46
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayFrequency(); 
    }
}