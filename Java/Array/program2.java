//Accept N elements from user and display the even elements

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

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Even elements are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}

class program2
{
    public static void main(String arg[])
    {
        int iLength = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();

    }
}