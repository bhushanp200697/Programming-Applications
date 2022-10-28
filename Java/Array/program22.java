//Accept the N*N elements from user and check whether the given element is present or not
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

    public boolean Search(int iValue)
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <Arr[i].length; j++)
            {
                if(Arr[i][j] == iValue)
                {
                    return true;
                }
            }
        }
        return false;
    }
}

class program22
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iNo = 0;
        boolean bRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iValue2 = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue1,iValue2);

        obj.Accept();

        System.out.println("Enter the element to be search");
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