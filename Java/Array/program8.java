//Accept N numbers from user and display the element having more frequency of occurances

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

    public int Frequency(int iValue)
    {
        int iCnt = 0;
        int iFrequency = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                iFrequency++;
            }
        }
        return iFrequency;
    }
}

class program8
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

        System.out.println("Enter the element to calculate the frequency");
        iNo = sobj.nextInt();

        iRet = obj.Frequency(iNo);
        System.out.println("Frequency of the element "+ iNo +" is: "+iRet);
    }
}