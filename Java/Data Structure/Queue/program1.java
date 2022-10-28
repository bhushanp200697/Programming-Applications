import java.util.*;

class node
{
    public node next;
    public int data;
}

class Queue
{
    public node head;
    public int Count;

    public Queue()
    {
        head = null;
        Count = 0;
    }

    public void Enqueue(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;

        if(Count == 0)
        {
            head = newn;
        }
        else
        {
            node temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }

        Count++;
    }

    public void Dequeue()
    {
        if(Count == 0)
        {
            return;
        }

        node temp = head;
        head = head.next;
        temp = null;

        Count--;
    }

    public void Display()
    {
        if(Count == 0)
        {
            System.out.println("Queue is empty");
            return;
        }

        node temp = head;

        System.out.println("Elements of Queue are : ");

        while(temp != null)
        {
            System.out.print("|" +temp.data+ "| -> ");
            temp = temp.next;
        }
           System.out.println("NULL");
    }

    public int CountNode()
    {
        return Count;
    }
}

class program1
{
    public static void main(String[] args) 
    {
        Queue obj = new Queue();   

        obj.Enqueue(11);
        obj.Enqueue(21);
        obj.Enqueue(51);
        obj.Enqueue(101);

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());

        obj.Dequeue();
        obj.Dequeue();

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());
    }
}
