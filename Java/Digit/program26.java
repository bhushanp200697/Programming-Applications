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

    public boolean CheckArmstrong()
    {
        int iTemp = 0, iCnt = 0,iMult = 1;
        int iDigCnt = 0, iDigit = 0, iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigCnt++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        while(iNo != 0)
        {
            iMult = 1;
            iDigit = iNo % 10;

            for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
            {
                iMult = iMult * iDigit;
            }

            iSum = iSum + iMult;
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

class program26
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