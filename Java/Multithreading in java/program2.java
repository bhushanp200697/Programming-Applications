
class Arithematic implements Runnable
{
    public void run()
    {
        int i = 0;

        for(i = 1; i <= 1000; i++)
        {
            System.out.println(Thread.currentThread().getName() + " : " +i);
        }
    }
}

class program2
{
    public static void main(String[] args) 
    {
        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.setName("first");
        t2.setName("second");

        t1.start();
        t2.start();
    }
}