#include <iostream>
using namespace std;

template<class T>
struct nodeSLL
{
    T data;
    struct nodeSLL *next;
};

template<class T>
class SinglyLinearLL
{
private:
    struct nodeSLL<T> *Head;

public:
    SinglyLinearLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

template<class T>
SinglyLinearLL<T>::SinglyLinearLL()
{
    Head = NULL;
}

template<class T>
void SinglyLinearLL<T>::InsertFirst(T no)
{
    struct nodeSLL<T> *newn = NULL;

    newn = new nodeSLL<T>;

    newn->data = no;
    newn->next = NULL;

    if (Head == NULL) 
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
}

template<class T>
void SinglyLinearLL<T>::InsertLast(T no)
{
    struct nodeSLL<T> *newn = NULL;
    struct nodeSLL<T> *temp= NULL;

    newn = new nodeSLL<T>;

    newn->data = no;
    newn->next = NULL;

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
    }

}

template<class T>
void SinglyLinearLL<T>::InsertAtPos(T no, int ipos)
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
        struct nodeSLL<T> *newn = NULL;

        newn = new nodeSLL<T>;

        newn->data = no;
        newn->next = NULL;

        struct nodeSLL<T> *temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

template<class T>
void SinglyLinearLL<T>::DeleteFirst()
{
    struct nodeSLL<T> *temp = NULL;

    if (Head == NULL)
    {
        return;
    }
    else
    {
        temp = Head;
        Head = temp->next;
        delete(temp);
    }
}

template<class T>
void SinglyLinearLL<T>::DeleteLast()
{
    struct nodeSLL<T> *temp = NULL;

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

template<class T>
void SinglyLinearLL<T>::DeleteAtPos(int ipos)
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
        struct nodeSLL<T> *temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        struct nodeSLL<T> *tempdelete = temp->next;

        temp->next = temp->next->next;
        delete (tempdelete);
    }
}

template<class T>
void SinglyLinearLL<T>::Display()
{
    struct nodeSLL<T> *temp = Head;

    cout<<"Elements from linked list are: "<<endl;

    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    printf("NULL\n");
}

template<class T>
int SinglyLinearLL<T>::Count()
{
    struct nodeSLL<T> *temp = Head;

    int iCnt = 0;

    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

///////////////////////////////////////////////////////


template<class T>
struct nodeDLL
{
    T data;
    struct nodeDLL *next;
    struct nodeDLL *prev;
};

template<class T>
class DoublyLinearLL
{
private:
    struct nodeDLL<T> *Head;

public:
    DoublyLinearLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

template<class T>
DoublyLinearLL<T>::DoublyLinearLL()
{
    Head = NULL;
}

template<class T>
void DoublyLinearLL<T>::InsertFirst(T no)
{
    struct nodeDLL<T> *newn = NULL;

    newn = new nodeDLL<T>;

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

template<class T>
void DoublyLinearLL<T>::InsertLast(T no)
{
    struct nodeDLL<T> *newn = NULL;
    struct nodeDLL<T> *temp= NULL;

    newn = new nodeDLL<T>;

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

template<class T>
void DoublyLinearLL<T>::InsertAtPos(T no, int ipos)
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
        struct nodeDLL<T> *newn = NULL;

        newn = new nodeDLL<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev= NULL;

        struct nodeDLL<T> *temp = Head;
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

template<class T>
void DoublyLinearLL<T>::DeleteFirst()
{
    struct nodeDLL<T> *temp = NULL;

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

template<class T>
void DoublyLinearLL<T>::DeleteLast()
{
    struct nodeDLL<T> *temp = NULL;

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

template<class T>
void DoublyLinearLL<T>::DeleteAtPos(int ipos)
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
        struct nodeDLL<T> *temp = Head;
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

template<class T>
void DoublyLinearLL<T>::Display()
{
    struct nodeDLL<T> *temp = Head;

    cout<<"Elements from linked list are: "<<endl;

    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    printf("NULL\n");
}

template<class T>
int DoublyLinearLL<T>::Count()
{
    struct nodeDLL<T> *temp = Head;

    int iCnt = 0;

    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////


template<class T>
struct nodeSCL
{
    T data;
    struct nodeSCL *next;
};

template<class T>
class SinglyCLL
{
private:
    struct nodeSCL<T> *Head;
    struct nodeSCL<T> *Tail;

public:
    SinglyCLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

template<class T>
SinglyCLL<T>::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    struct nodeSCL<T> *newn = NULL;

    newn = new nodeSCL<T>;

    newn->data = no;
    newn->next = NULL;

    if ((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
}

template<class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct nodeSCL<T> *newn = NULL;

    newn = new nodeSCL<T>;

    newn->data = no;
    newn->next = NULL;

    if ((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
    }
    else
    {
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
}

template<class T>
void SinglyCLL<T>::InsertAtPos(T no, int ipos)
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
        struct nodeSCL<T> *newn = NULL;

        newn = new nodeSCL<T>;

        newn->data = no;
        newn->next = NULL;

        struct nodeSCL<T> *temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

template<class T>
void SinglyCLL<T>::DeleteFirst()
{
    if (Head == NULL && Tail == NULL)
    {
        return;
    }
    else if (Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head->next;
        delete Tail->next;

        Tail->next = Head;
    }
}

template<class T>
void SinglyCLL<T>::DeleteLast()
{
    if (Head == NULL && Tail == NULL) 
    {
        return;
    }
    else if (Head == Tail)
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        struct nodeSCL<T> *temp = Head;

        while (temp->next != Tail)
        {
            temp = temp->next;
        }

        delete Tail;
        Tail = temp;

        Tail->next = Head;
    }
}

template<class T>
void SinglyCLL<T>::DeleteAtPos(int ipos)
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
        struct nodeSCL<T> *temp1 = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }

        struct nodeSCL<T> *temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;
    }
}

template<class T>
void SinglyCLL<T>::Display()
{
    struct nodeSCL<T> *temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp -> next;
    }while(temp != Head);

    cout<<endl;
}

template<class T>
int SinglyCLL<T>::Count()
{
    int iCnt = 0;
    struct nodeSCL<T> *temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return 0;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Head);

    return iCnt;
}

///////////////////////////////////////////////////////////


template<class T>
struct nodeDCL
{
    T data;
    struct nodeDCL *next;
    struct nodeDCL *prev;
};

template<class T>
class DoublyCLL
{
    private:
        struct nodeDCL<T> *Head;
        struct nodeDCL<T> *Tail;
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
    struct nodeDCL<T> *newn = NULL;
    newn = new nodeDCL<T>;

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
    struct nodeDCL<T> *newn = NULL;
    newn = new nodeDCL<T>;

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
        struct nodeDCL<T> *newn = NULL;
        newn = new nodeDCL<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        struct nodeDCL<T> *temp= Head;

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
        struct nodeDCL<T> *temp = Head;

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
    struct nodeDCL<T> *temp = Head;

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

////////////////////////////////////////////////////


template<class T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};

template<class T>
class Queue
{
    public:
        struct nodeQ<T> *Head;
        int Count;

        Queue();
        void Enqueue(T);        // InsertLast
        void Dequeue();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    struct nodeQ<T> *newn = NULL;
    newn = new nodeQ<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct nodeQ<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}

template <class T>
void Queue<T>::Dequeue()       // Deletefirst
{
    T no;   // int no;

    if(Count == 0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }

    no = Head -> data;
    struct nodeQ<T> *temp = Head;
    Head = Head->next;
    delete temp;

    Count--;
    cout<<"Removed element is : "<<no<<endl;
}

template<class T>
void Queue<T>::Display()
{
    cout<<"Elements from Queue are : "<<endl;
    struct nodeQ<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
    return Count;
}

///////////////////////////////////////////////

template<class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

template<class T>
class Stack
{
    public:
        struct nodeS<T> *Head;
        int Count;

        Stack();
        void Push(T);     
        void Pop();           
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct nodeS<T> *newn = NULL;
    newn = new nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = Head;
    Head = newn;
    Count++;
}

template <class T>
void Stack<T>::Pop()     
{
    T no;   

    if(Count == 0)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }

    no = Head -> data;
    struct nodeS<T> *temp = Head;
    Head = Head->next;
    delete temp;

    Count--;
    cout<<"Removed element is : "<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Stack are : "<<endl;
    struct nodeS<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}


int main()
{
    int iRet = 0;

    SinglyLinearLL <int>obj1;

    DoublyLinearLL <int>obj2;

    SinglyCLL <int>obj3;

    DoublyCLL <int>obj4;

    Queue <int>obj5;

    Stack <int>obj6;

    return 0;
}