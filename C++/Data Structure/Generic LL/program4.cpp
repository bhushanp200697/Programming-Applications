#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyCLL
{
    private:
        struct node<T> *Head;
        struct node<T> *Tail;
        int CountNode;

     public:
        DoublyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int Count();
        void Display();
};

template<class T>
DoublyCLL<T>::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    CountNode = 0;
}

template<class T>
void DoublyCLL<T>::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

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

template<class T>
void DoublyCLL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

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
        Tail->next = newn;
        newn->prev = Tail;

        Tail = newn;
    }
    Head->prev = Tail;
    Tail->next = Head;

    CountNode++;
}

template<class T>
void DoublyCLL<T>::InsertAtPos(T iNo, int iPos)
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
        struct node<T> *newn = NULL;
        newn = new node<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        struct node<T> *temp= Head;

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

template<class T>
void DoublyCLL<T>::DeleteFirst()
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
        delete (Tail->next);
    }

    Head->prev = Tail;
    Tail->next = Head;

    CountNode--;
}

template<class T>
void DoublyCLL<T>::DeleteLast()
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
        delete (Tail->next);
    }
    Head->prev = Tail;
    Tail->next = Head;

    CountNode--;
}

template<class T>
void DoublyCLL<T>::DeleteAtPos(int iPos)
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
        struct node<T> *temp = Head;

        for(int i=1; i<iPos-1; i++)
        {
            temp= temp->next;
        }
        temp->next= temp->next->next;
        delete (temp->next->prev);
        temp->next->prev= temp;
    }
}

template<class T>
void DoublyCLL<T>::Display()
{
    int i = 0;
    struct node<T> *temp = Head;

    for (i = 1; i <= CountNode; i++)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "\n";
}

template<class T>
int DoublyCLL<T>::Count()
{
    return CountNode;
}

int main()
{
    int iRet = 0;

    DoublyCLL <int>obj1;

    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(51);
    obj1.InsertLast(101);

    obj1.InsertAtPos(75,4);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj1.DeleteAtPos(4);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj1.DeleteFirst();

    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    DoublyCLL <float>obj2;

    obj2.InsertFirst(21.11);
    obj2.InsertFirst(11.11);
    obj2.InsertLast(51.11);
    obj2.InsertLast(101.11);

    obj2.InsertAtPos(75.11,4);

    obj2.Display();
    iRet = obj2.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj2.DeleteAtPos(4);

    obj2.Display();
    iRet = obj2.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj2.DeleteFirst();

    obj2.DeleteLast();

    obj2.Display();
    iRet = obj2.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    return 0;
}
