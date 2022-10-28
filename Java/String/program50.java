//Accept the string from user and Display the word which occurs maximum number of times

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
        String Arr[] = str.split(" ");

        HashMap<String, Integer> hobj = new HashMap<>();
        int Frequency = 0;

        for(String ch : Arr)
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
        
        Set<String> setobj = hobj.keySet();
        
        int iMax = 0;
        String c = " ";

        for(String value : setobj)
        {
            if(hobj.get(value) > iMax)
            {
                iMax = hobj.get(value);
                c = value;
            }
        }
        System.out.println(c +" word occurs maximum number of times ie : "+iMax);
    }
    
}

class program50
{
    public static void main(String arg[])
    {
        Stringx obj = new Stringx();

        obj.Accept();

        obj.DisplayFrequency(); 
    }
}