//Singly circular linked list

import java.util.*;

class node
{
    public int data;
    public node next;
}

class SinglyCLL
{
    public node head;
    public node tail;
    public int Count;

    public SinglyCLL()
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

        if(Count == 0)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        tail.next = head;

        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;

        if(Count == 0)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail.next = newn;
            tail = newn;
        }
        tail.next = head;

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

        System.out.println("Elements of Linked list are : ");

        do 
        {
            System.out.print("|" +temp.data+ "| -> ");
            temp = temp.next;
        }while(temp != head);
        
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

            node temp = head;

            for(int i = 1; i < Pos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

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
        }
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
            node temp = head;

            while(temp.next != tail)
            {
                temp = temp.next;
            }
            tail = null;
            tail = temp;
        }
        tail.next = head;

        Count--;
    }

    public void DeleteAtPos(int Pos)
    {
        if(Pos < 1 || Pos > Count)
        {
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
            node temp2 = temp.next;
            temp.next = temp.next.next;
            temp2 = null;

            Count--;
        }
    }
}

class program3 
{
    public static void main(String arg[])
    {
        SinglyCLL obj = new SinglyCLL();

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