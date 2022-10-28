// Input : 79959
// Output : 3

/*
7+9+9+5+9       39

3 + 9                   12

1 + 2                   3

3
*/

import java.util.*;

class Digit
{
    public int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("The number is: "+this.iNo);
    }

    public int Addition()
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(true)
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }

            if(iSum > 10)
            {
                iNo = iSum;
                iSum = 0;
            }
            else
            {
                break;
            }
        }
        return iSum;
    }
      
}

class program27
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        iRet = obj.Addition();
        System.out.println("Addition is: "+iRet);
    }
}