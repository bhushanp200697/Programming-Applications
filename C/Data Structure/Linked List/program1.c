// Singly Linear LL

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements from linked list are : \n");

    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}


void InsertAtPos(PPNODE Head, int No, int pos)
{
    int Size = 0, iCnt=0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    Size = Count(*Head);

    if ((pos < 1) || (pos > (Size + 1)))
    {
        printf("Invalid position \n");
        return;
    }
    if (pos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (pos == Size + 1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn= NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp= *Head;

        for(iCnt=1; iCnt <pos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next= temp->next;
        temp->next= newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else
    {
        temp = *Head;
        *Head = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
       free(*Head);
       *Head= NULL; 
    }
    else
    {
        temp= *Head;

        while(temp->next->next != NULL)
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next= NULL;
    }
}

void DeleteAtPos(PPNODE Head, int pos)
{
    int Size= 0, iCnt=0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    Size=  Count(*Head);

    if((pos<1) || (pos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos== 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == Size)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;

        for(iCnt=1; iCnt< pos-1; iCnt++)
        {
            temp = temp->next;
        }
        tempdelete= temp->next;
        temp->next= temp->next->next;
        free(tempdelete);
    }

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    InsertLast(&First, 111);

    InsertAtPos(&First,75,4);
    DeleteAtPos(&First, 4);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are  : %d\n", iRet);

    DeleteFirst(&First);

    DeleteLast(&First);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are  : %d\n", iRet);

}