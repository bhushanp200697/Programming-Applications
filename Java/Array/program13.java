//Accept the N numbers from user and display the addition of that elements

import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int Sumation()
    {
        int iCnt = 0;
        int iSum = 0;

        while(iCnt < Arr.length)
        {
            iSum = iSum + Arr[iCnt];
            iCnt++;
        }
        return iSum;
    }
}

class program13
{
    public static void main(String arg[])
    {
        int iLength = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();

        iRet = obj.Sumation();
        System.out.println("Addition is: "+iRet);
    }
}