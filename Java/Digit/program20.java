//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

import java.util.*;

class Digit
{
    public int iNo1;
    public int iNo2;

    public Digit(int x, int y)
    {
        iNo1 = x;
        iNo2 = y;
    }

    public void Display()
    {
        System.out.println("The base is: "+this.iNo1);
        System.out.println("The power is: "+this.iNo2);
    }

    public int Power()
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            iMult = iMult * iNo1;
        }
        return iMult;
    }
}

class program20
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the base");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the power");
        iValue2 = sobj.nextInt();

        Digit obj = new Digit(iValue1,iValue2);

        obj.Display();

        iRet = obj.Power();
        System.out.println("Result is : "+iRet);
    }
}