//Accept N numbers from user and display the Minimum number

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

    public int Minimum()
    {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
}

class program7
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

        iRet = obj.Minimum();
        System.out.println("Minimum elements is: "+iRet);
    }
}