// using 

class Arithematic extends Thread
{
    public void run()
    {
        int i = 0;

        for(i = 1; i <= 10; i++)
        {
            try
            {
                System.out.println(Thread.currentThread().getName() + " : " +i);
                Thread.sleep(500);
            }
            catch(InterruptedException obj)
            {
                System.out.println(obj);
            }
        }
    }
}

class program7
{
    public static void main(String[] args) throws InterruptedException
    {
        System.out.println("inside main");

        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.setName("first");   
        t2.setName("second");

        System.out.println("priority of T1 : "+t1.getPriority());
        System.out.println("priority of T2 : "+t2.getPriority());

        t1.setPriority(10);
        t2.setPriority(2);

        System.out.println("priority of T1 : "+t1.getPriority());
        System.out.println("priority of T2 : "+t2.getPriority());

        t1.start();
        t2.start();

        t1.join();
        t2.join();
        
        System.out.println("end of main thread");
    }
}