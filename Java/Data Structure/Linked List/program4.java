//Doubly circular linked list

import java.util.*;

class node
{
    public node next;
    public node prev;
    public int data;
}

class DoublyCLL
{
    public node head;
    public node tail;
    public int Count;
    
    public DoublyCLL()
    {
        head = null;
        tail = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(Count == 0)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn.next = head;
            head.prev = newn;
            head = newn;
        }
        head.prev = tail;
        tail.next = head;

        Count++;
    }

    public void Display()
    {
        if(Count == 0)
        {
            System.out.println("Linked list is empty");
            return;
        }

        System.out.println("Elements of the linked list are: ");

        node temp = head;

        for(int i = 1; i <= Count; i++) 
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

    public void InsertLast(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(Count == 0)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail.next = newn;
            newn.prev = tail;
            tail = newn;
        }
        tail.next = head;
        head.prev = tail;

        Count++;
    }

    public void InsertAtPos(int no,int pos)
    {
        if(pos < 1 || pos > Count+1)
        {
            System.out.println("Invalid position");
            return;
        }

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == Count+1)
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

            for(int i = 1; i < pos-1; i++)
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
            tail = null;
        }
        else
        {
            head = head.next;
            tail.next = null;
        }
        head.prev = tail;
        tail.next = head;

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
            tail = null;
        }
        else 
        {
            tail = tail.prev;
            tail.next = null;
        }
        tail.next = head;
        head.prev = tail;

        Count--;
    }

    public void DeleteAtPos(int pos)
    {
        if(pos < 1 || pos > Count)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == Count)
        {
            DeleteLast();
        }
        else 
        {
            node temp = head;

            for(int i = 1; i < pos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = null;
            temp.next.prev = temp;

            Count--;
        }
    }
}

class program4
{
    public static void main(String[] args) 
    {
        DoublyCLL obj = new DoublyCLL();
        
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