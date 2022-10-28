//Accept N numbers from user and display the maximum number

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

    public int Maximum()
    {
        int iCnt = 0;
        int iMax = Arr[0];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(iMax < Arr[iCnt])
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
}

class program6
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

        iRet = obj.Maximum();
        System.out.println("Maximum elements is: "+iRet);
    }
}