//Accept the string from user and display how many times the character contains in the string

import java.util.*;

class Stringx
{
    public String str;
    public char ch;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        str = sobj.nextLine();

        System.out.println("Enter the character that you want to search");
        ch = sobj.next().charAt(0);
    }

    public int Count()
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        int iCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ch)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class program9
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.Count();
        System.out.println("String contains the character: "+iRet + " times");
    }
}