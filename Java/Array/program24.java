//Accept the N * N elements from user and swap the columns

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

    public void Display()
    {
        System.out.println("Elements of array are : ");
        
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"  ");
            }
            System.out.println();
        }
    }

    public void SwapCol()
    {
        int iTemp = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol-1; j+=2)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i][j+1];
                Arr[i][j+1] = iTemp;
            }
        }
    }
}

class program24
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iValue2 = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue1,iValue2);

        obj.Accept();
        obj.Display();

        obj.SwapCol();
        System.out.println("Data after swap is: ");
        obj.Display();
    }
}