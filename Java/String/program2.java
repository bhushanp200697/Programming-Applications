//Accept the string and display each character

import java.util.*;

class program2
{
    public static void main(String arg[])
    {
        String str = "Hello";
        
        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}