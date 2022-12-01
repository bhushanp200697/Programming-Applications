
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

class program5
{
    public static void main(String[] args) throws InterruptedException
    {
        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.setName("first");   
        t2.setName("second");

        t1.start();
        t2.start();

        t1.join();
        t2.join();
    }
}