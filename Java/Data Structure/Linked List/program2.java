//Doubly linear linked list

import java.util.*;

class node
{
    public int data;
    public node next;
    public node prev;
}

class DoublyLLL
{
    public node head;
    public int Count;

    public DoublyLLL()
    {
        head = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head.prev = newn;
            head = newn;
        }
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(head == null)
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
            newn.prev = temp;
        }
        Count++;
    }

    public void Display()
    {
        node temp = head;

        if(Count == 0)
        {
            System.out.println("Linked list is empty");
            return;
        }

        System.out.println("Elements of the linked list are: ");

        while(temp != null)
        {
            System.out.print("|"+ temp.data + "| -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public int CountNode()
    {
        return Count;
    }

    public void InsertAtPos(int no,int Pos)
    {
        if(Pos < 1 || Pos > Count+1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(Pos == 1)
        {
            InsertFirst(no);
        }
        else if(Pos == Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node();

            newn.data = no;
            newn.next = null;
            newn.prev = null;

            node temp = head;

            for(int i = 1;i < Pos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

            Count++;
        }
    }

    public void DeleteFirst()
    {
        if(Count == 0)
        {
            return;
        }
        else if(Count == 1)
        {
            head = null;
        }
        else
        {
            head = head.next;
            head.prev = null;
        }

        Count--;
    }

    public void DeleteLast()
    {
        if(Count == 0)
        {
            return;
        }
        else if(Count == 1)
        {
            head = null;
        }
        else 
        {
            node temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }

        Count--;
    }

    public void DeleteAtPos(int Pos)
    {
        if(Pos < 1 || Pos > Count)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(Pos == 1)
        {
            DeleteFirst();
        }
        else if(Pos == Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = head;

            for(int i = 1; i < Pos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;

            Count--;
        }
    }
}

class program2
{
    public static void main(String arg[]) 
    {
        DoublyLLL obj= new DoublyLLL();

        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(51);
        obj.InsertLast(101);

        obj.InsertAtPos(75, 4);

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());

        obj.DeleteAtPos(4);

        obj.DeleteFirst();

        obj.DeleteLast();

        obj.Display();

        System.out.println("Number of elements are : "+obj.CountNode());
    }
}