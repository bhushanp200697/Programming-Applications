//Accept the string from user and display the how many number of capital letters contain in the string

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

    public int CountCapital()
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        int iCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class program10
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.CountCapital();
        System.out.println("Number of capital characters are : " +iRet);
    }
}