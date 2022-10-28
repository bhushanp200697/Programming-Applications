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

    public long Power()
    {
        int iCnt = 0;
        long lMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            lMult = lMult * iNo1;
        }
        return lMult;
    }
}

class program22
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        long lRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the base");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the power");
        iValue2 = sobj.nextInt();

        Digit obj = new Digit(iValue1,iValue2);

        obj.Display();

        lRet = obj.Power();
        System.out.println("Result is : "+lRet);
    }
}