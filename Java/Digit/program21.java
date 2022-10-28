//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

import java.util.*;

class Digit
{
    public int iNo1;
    public int iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the base");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the power");
        iNo2 = sobj.nextInt();
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

class program21
{
    public static void main(String arg[])
    {
        long lRet;

        Digit obj = new Digit();

        obj.Accept();
        obj.Display();

        lRet = obj.Power();
        System.out.println("Result is : "+lRet);
    }
}