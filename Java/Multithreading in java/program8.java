import java.util.Scanner;

class Data
{
    public int Arr[];
    public Data(int size)
    {
        Arr = new int[size];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter elements");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
}

class DemoEven extends Thread
{
    public Data dobj;

    public DemoEven(Data obj)
    {
        dobj = obj;
    }

    public void run()
    {
        for(int i = 0; i < dobj.Arr.length; i++)
        {
            if(dobj.Arr[i] % 2 == 0)
            {
                System.out.println("Even no is : "+dobj.Arr[i]);
            }
        }
    }
}

class DemoOdd extends Thread
{
    public Data dobj;

    public DemoOdd(Data obj)
    {
        dobj = obj;
    }

    public void run()
    {
        for(int i = 0; i < dobj.Arr.length; i++)
        {
            if(dobj.Arr[i] % 2 != 0)
            {
                System.out.println("Odd no is : "+dobj.Arr[i]);
            }
        }
    }
}

class program8
{
    public static void main(String[] args) throws InterruptedException
    {
        Data obj1 = new Data(6);
        obj1.Accept();

        DemoEven eobj = new DemoEven(obj1);
        DemoOdd oobj = new DemoOdd(obj1);

        Thread t1 = new Thread(eobj);
        Thread t2 = new Thread(oobj);

        t1.start();
        t1.join();

        t2.start();  
        t2.join();
    }
}