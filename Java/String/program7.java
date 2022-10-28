//Accept the string from user and display its length

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

    public int strlenX()
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0;

        iCnt = Arr.length;

        return iCnt;
    }
}

class program7
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Stringx obj = new Stringx();

        obj.Accept();

        iRet = obj.strlenX();
        System.out.println("String length is : "+iRet);
    }
}