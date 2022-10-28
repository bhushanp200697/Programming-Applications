//Accept the N*N elements from user and display addition of that elements

import java.util.*;

class ArrayX
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    ArrayX(int iValue1, int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        
    }

    public int Addition()
    {
        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println();
        }
        return iSum;
    }
}

class program15
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iValue2 = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue1,iValue2);

        obj.Accept();

        iRet = obj.Addition();
        System.out.println("Addition is: "+iRet);
    }
}