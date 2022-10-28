// Doubly linear LL

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
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
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while (temp->next != NULL)
        {
            temp= temp->next;
        }
        temp->next= newn;
        newn->prev= temp;
    }
}

void Display(PNODE Head)
{
    printf("Elements from linked list are: \n");

    while(Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head= Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt= 0;

    while(Head != NULL)
    {
        iCnt++;
        Head= Head->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int No, int Pos)
{
    int Size= 0, iCnt= 0;
    PNODE newn = NULL; 
    PNODE temp = NULL;

    Size= Count(*Head);

    if((Pos<1) || (Pos > Size +1))
    {
        printf("Invalid position \n");
        return;
    }

    if(Pos==1)
    {
        InsertFirst(Head, No);
    }

    else if(Pos==Size+1)
    {
        InsertLast(Head, No);
    }

    else
    {
        temp= *Head;

        newn= (PNODE)malloc(sizeof(NODE));

        newn->data= No;
        newn->next= NULL;
        newn->prev= NULL;

        for(iCnt=1; iCnt< Pos-1; iCnt++)
        {
            temp= temp->next;
        }
        newn->next= temp->next;
        temp->next->prev= newn;
        temp->next= newn;
        newn->prev= temp;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head== NULL)
    {
        return;
    }
    if((*Head)->next == NULL)
    {
        free(*Head);
        *Head= NULL;
    }
    else
    {
        *Head= (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev=NULL;
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp= NULL;

    if(*Head== NULL)
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
            temp = temp->next;
        }
        free(temp->next);
        temp->next= NULL;
    }
}

void DeleteAtPos(PPNODE Head,int Pos)
{
    int Size= 0, iCnt= 0;

    PNODE temp= NULL;

    Size= Count(*Head);

    if((Pos<1) || (Pos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    if(Pos== 1)
    {
        DeleteFirst(Head);
    }
    else if(Pos== Size)
    {
        DeleteLast(Head);
    }
    else
    {
        temp= *Head;

        for(iCnt=1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE first = NULL;
    int ret = 0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    InsertAtPos(&first,75,4);

    Display(first);

    ret = Count(first);
    printf("Number of nodes are : %d\n",ret);

    DeleteAtPos(&first,4);

    DeleteFirst(&first);

    DeleteLast(&first);
    
    Display(first);

    ret = Count(first);
    printf("Number of nodes are : %d\n",ret);

    return 0;
}