#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;


class DoublyLinearLL
{
private:
    PNODE Head;

public:
    DoublyLinearLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

DoublyLinearLL::DoublyLinearLL()
{
    Head = NULL;
}

void DoublyLinearLL::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (Head == NULL) 
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = newn;
    }
}

void DoublyLinearLL::InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp= NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        temp = Head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev= temp;
    }

}

void DoublyLinearLL::InsertAtPos(int no, int ipos)
{
    int iSize = Count();

    if ((ipos < 1) || (ipos > iSize + 1))
    {
        cout << "Invalid position\n";
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iSize + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = NULL;

        newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev= NULL;

        PNODE temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev= newn;
        temp->next = newn;
        newn->prev= temp;
    }
}

void DoublyLinearLL::DeleteFirst()
{
    PNODE temp = NULL;

    if (Head == NULL)
    {
        return;
    }

    if(Head->next == NULL)
    {
        delete(Head);
        Head= NULL;
    }

    else
    {
        Head= Head->next;
        delete(Head->prev);
        Head->prev=NULL;
    }
}

void DoublyLinearLL::DeleteLast()
{
    PNODE temp = NULL;

    if (Head == NULL)
    {
        return;
    }
    else if (Head->next == NULL)
    {
        delete Head;
        Head = NULL;

    }
    else
    {
        temp= Head;

        while(temp->next->next != NULL)
        {
            temp= temp->next;
        }
        delete(temp->next);
        temp->next= NULL;
    }
}

void DoublyLinearLL::DeleteAtPos(int ipos)
{
    int iSize = Count();

    if ((ipos < 1) || (ipos > iSize))
    {
        cout << "Invalid position\n";
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iSize)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;
    }
}

void DoublyLinearLL::Display()
{
    PNODE temp = Head;

    cout<<"Elements from linked list are: "<<endl;

    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    printf("NULL\n");
}

int DoublyLinearLL::Count()
{
    PNODE temp = Head;

    int iCnt = 0;

    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    DoublyLinearLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteFirst();

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    return 0;
}