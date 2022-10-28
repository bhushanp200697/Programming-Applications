//Accept N numbers from user and display the last occurance position of the number to be search

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

    public int SearchLastOccurance(int iValue)
    {
        int iCnt = 0;

        for(iCnt = Arr.length-1; iCnt > 0; iCnt--)
        {
            if(Arr[iCnt] == iValue)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
}

class program12
{
    public static void main(String arg[])
    {
        int iLength = 0;
        int iNo = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();

        System.out.println("Enter the element to search");
        iNo = sobj.nextInt();

        iRet = obj.SearchLastOccurance(iNo);
        if(iRet == -1)
        {
            System.out.println("Element is not there in array");
        }
        else
        {
            System.out.println("Element last occured at : "+iRet);
        }
        
    }
}