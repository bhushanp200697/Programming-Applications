//Accept the string from user and display how many times the characters 'l' contains in the string

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

    public int CountL()
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        int iCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == 'l')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class program8
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.CountL();
        System.out.println("String contains l : "+iRet + " times");
    }
}