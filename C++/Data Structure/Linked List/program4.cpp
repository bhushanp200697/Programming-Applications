#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int CountNode;

     public:
        DoublyCLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int Count();
        void Display();
};

DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    CountNode = 0;
}

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (CountNode == 0) 
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = newn;
    }
    Head->prev = Tail;
    Tail->next = Head;

    CountNode++;
}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (CountNode == 0) 
    {
        Head == newn;
        Tail = newn;
    }
    else
    {
        Tail->next = newn;
        newn->prev = Tail;

        Tail = newn;
    }
    Head->prev = Tail;
    Tail->next = Head;

    CountNode++;
}

void DoublyCLL::InsertAtPos(int iNo, int iPos)
{
    if ((iPos < 1) || (iPos > CountNode + 1))
    {
        cout << "Invalid position\n";
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == CountNode + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp= Head;

        for(int i=1; i<iPos-1; i++)
        {
            temp= temp->next;
        }

        newn->next= temp->next;
        temp->next->prev= newn;
        temp->next= newn;
        newn->prev= temp;

        CountNode++;
    }
}

void DoublyCLL::DeleteFirst()
{
    if (CountNode == 0)
    {
        return;
    }
    else if (CountNode == 1)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head->next;
        delete Tail->next;
    }

    Head->prev = Tail;
    Tail->next = Head;

    CountNode--;
}

void DoublyCLL::DeleteLast()
{
    if (CountNode == 0)
    {
        return;
    }
    else if (CountNode == 1)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Tail = Tail->prev;
        delete Tail->next;
    }
    Head->prev = Tail;
    Tail->next = Head;

    CountNode--;
}

void DoublyCLL::DeleteAtPos(int iPos)
{
    if ((iPos < 1) || (iPos > CountNode))
    {
        cout << "Invalid position\n";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == CountNode)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = Head;

        for(int i=1; i<iPos-1; i++)
        {
            temp= temp->next;
        }
        temp->next= temp->next->next;
        delete temp->next->prev;
        temp->next->prev= temp;

        CountNode--;
    }
}

void DoublyCLL::Display()
{
    int i = 0;
    PNODE temp = Head;

    for (i = 1; i <= CountNode; i++)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "\n";
}

int DoublyCLL::Count()
{
    return CountNode;
}

int main()
{
    int iRet = 0;

    DoublyCLL obj;

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
