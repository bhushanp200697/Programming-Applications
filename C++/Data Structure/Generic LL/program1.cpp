#include <iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyLinearLL
{
private:
    struct node<T> *Head;

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
    struct node<T> *newn = NULL;

    newn = new node<T>;

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
    struct node<T> *newn = NULL;
    struct node<T> *temp= NULL;

    newn = new node<T>;

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
        struct node<T> *newn = NULL;

        newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        struct node<T> *temp = Head;
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
    struct node<T> *temp = NULL;

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
    struct node<T> *temp = NULL;

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
        struct node<T> *temp = Head;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        struct node<T> *tempdelete = temp->next;

        temp->next = temp->next->next;
        delete (tempdelete);
    }
}

template<class T>
void SinglyLinearLL<T>::Display()
{
    struct node<T> *temp = Head;

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
    struct node<T> *temp = Head;

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

    SinglyLinearLL <int>obj1;

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

    SinglyLinearLL <float>obj2;

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