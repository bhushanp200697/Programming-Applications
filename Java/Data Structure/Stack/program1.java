import java.util.*;

class node
{
    public node next;
    public int data;
}

class Stack
{
    public node head;
    public int Count;

    public Stack()
    {
        head = null;
        Count = 0;
    }

    public void Push(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;

        newn.next = head;
        head = newn;

        Count++;
    }

    public void Pop()
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
            System.out.println("Stack is empty");
            return;
        }

        node temp = head;

        System.out.println("Elements of Stack are : ");

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
        Stack obj = new Stack();   

        obj.Push(11);
        obj.Push(21);
        obj.Push(51);
        obj.Push(101);

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());

        obj.Pop();
        obj.Pop();

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());
    }
}
