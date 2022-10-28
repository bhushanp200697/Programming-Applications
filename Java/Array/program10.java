//Accept N numbers from user and check whether the enterd number is there in given numbers or not

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

    public boolean Search(int iValue)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program10
{
    public static void main(String arg[])
    {
        int iLength = 0;
        int iNo = 0;
        boolean bRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();

        System.out.println("Enter the element to search");
        iNo = sobj.nextInt();

        bRet = obj.Search(iNo);
        if(bRet == true)
        {
            System.out.println("Element is there in array");
        }
        else
        {
            System.out.println("Element is not there in array");
        }
        
    }
}