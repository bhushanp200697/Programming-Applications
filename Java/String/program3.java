//Accept the string and display each character

import java.util.*;

class program3
{
    public static void main(String arg[])
    {
        String str = "Hello";
        
        char Arr[] = str.toCharArray();

        int i = 0;

        while(i < Arr.length)
        {
            System.out.println(Arr[i]);
            i++;
        }
    }
}