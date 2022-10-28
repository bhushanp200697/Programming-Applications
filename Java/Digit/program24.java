//Accept the number from user and check whether the number is armstrong or not

import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int x)
    {
        iNo = x;
    }

    public void Display()
    {
        System.out.println("The number is: "+this.iNo);
    }

    public int Power(int iNo1,int iNo2)
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            iMult = iMult * iNo1;
        }
        return iMult;
    }

    public boolean CheckArmstrong()
    {
        int iDigit = 0, iDigCnt = 0;
        int iTemp = 0, iSum = 0;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigCnt++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + Power(iDigit,iDigCnt);
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program24
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean bRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);

        obj.Display();

        bRet = obj.CheckArmstrong();
        if(bRet == true)
        {
            System.out.println("The number is armstrong number");
        }
        else
        {
            System.out.println("The number is not armstrong number");
        }
    }
}