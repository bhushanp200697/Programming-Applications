import java.util.*;

class Bitwise
{
    public int CountBits(int iNo)
    {
        int iCnt = 0;
        int iMask = 0X00000001;
        int iResult = 0;
        
        System.out.println("ON bits are:\n");

        for(int i = 1; i <= 32;i++)
        {
            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                iCnt++;
            }
            iMask = iMask << 1;
        }
        return iCnt;
    }
}

class program17
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.CountBits(iValue);
        
        System.out.println("Number of ON bits are : "+iRet);
    }
}