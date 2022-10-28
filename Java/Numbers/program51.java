//Accept number from user and count the number of factors 

import java.util.*;

class Number
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
        System.out.println("The numbers is: "+this.iNo);
    }

    public int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

        for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFactCnt++;
            }
        }
        return iFactCnt;
    }
}

class program51
{
    public static void main(String arg[])
    {
        int iRet;

        Number obj = new Number();

        obj.Accept();
        obj.Display();

        iRet = obj.CountFactor();
        System.out.println("Number of factors are: "+iRet);
    }
}