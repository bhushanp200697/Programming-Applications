
class Arithematic implements Runnable
{
    public void run()
    {
        int i = 0;

        for(i = 1; i < 10; i++)
        {
            System.out.println(i);
        }
    }
}

class program1
{
    public static void main(String[] args) 
    {
        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic();

        System.out.println("Current thread is : "+ Thread.currentThread());

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();
    }
}