//Accept the N*N elements from user and display addition of even elements

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

    public int AddEven()
    {
        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <Arr[i].length; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
            System.out.println();
        }
        return iSum;
    }
}

class program16
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

        iRet = obj.AddEven();
        System.out.println("Addition of even elements is: "+iRet);
    }
}