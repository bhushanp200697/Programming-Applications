import java.util.Scanner;

class displayFactors extends Thread
{
    public int Value;

    public displayFactors(int iNo)
    {
        Value = iNo;
    }

    public void run()
    {
        int iCnt = 0;

        System.out.println("The factors are : ");

        for(iCnt = 1; iCnt <= (Value/2); iCnt++)
        {
            if(Value % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class checkPrime extends Thread
{
    public int Value;

    public checkPrime(int iNo)
    {
        Value = iNo;
    }

    public void run()
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (Value/2); iCnt++)
        {
            if(Value % iCnt == 0)
            {
                break;
            }
        }
        if(iCnt == (Value/2) + 1)
        {
            System.out.println("The number is prime number");
        }
        else
        {
            System.out.println("The number is not prime");
        }
    }
}

class program9
{
    public static void main(String[] args) throws InterruptedException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int No = sobj.nextInt();

        displayFactors fobj = new displayFactors(No);
        checkPrime pobj = new checkPrime(No);

        Thread t1 = new Thread(fobj);
        Thread t2 = new Thread(pobj);

        t1.start();
        t2.start();
        
        t1.join(); 
        t2.join();
    }
}