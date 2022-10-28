//Selection Sort

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements");
        for(int i= 0;i <Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
   {
        System.out.println("Elements of the array are");
        for(int i= 0;i <Arr.length; i++)
        {
           System.out.print(Arr[i]+"  ");
        }
        System.out.println();
   }

   public void SelectionSort()
   {
        int i = 0, j = 0, min_index = 0, temp = 0;

        for(i = 0; i < Arr.length-1; i++)
        {
            min_index = i;
            for(j = i+1; j < Arr.length; j++)
            {
                if(Arr[min_index] > Arr[j])
                {
                    min_index = j;
                }
            }
            if(i != min_index)
            {
                temp = Arr[i];
                Arr[i] = Arr[min_index];
                Arr[min_index] = temp;
            }

        }
   }
}

class program2
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of array : ");
            int size = sobj.nextInt();

            ArrayX aobj = new ArrayX(size);
            aobj.Accept();
            aobj.Display();

            aobj.SelectionSort();
            System.out.println("Data after sorting");
            aobj.Display();
    }
}