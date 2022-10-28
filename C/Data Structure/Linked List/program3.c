// Singly circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    //(*tail)->next = *head;
}

void Display(PNODE head, PNODE tail)
{
    if((head == NULL) && (tail == NULL))
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Elements of the linked list are:\n");

    do 
    {
        printf("|%d| -> ",head->data);
        head = head->next;
    }while(head != tail->next);

    printf("NULL\n");
}

int Count(PNODE head, PNODE tail)
{
    int iCnt = 0;

    if((head == NULL) && (tail == NULL))
    {
        return 0;
    }

    do 
    {
        iCnt++;
        head = head->next;
    }while(head != tail->next);

    return iCnt;
}

void InsertLast(PPNODE head,PPNODE tail,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        *tail = newn;
    }
    (*tail)->next = *head;
}

void InsertAtPos(PPNODE head,PPNODE tail,int no,int Pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int Size = 0;

    Size = Count(*head,*tail);

    if(Pos < 1 || Pos > Size+1)
    {
        printf("Invalid Position\n");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(Pos == Size+1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(int i = 1; i < Pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
    (*tail)->next = *head;

}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*tail)->next);
    }
    (*tail)->next = *head;
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    PNODE temp = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*tail);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        temp = *head;

        while(temp->next != (*tail))
        {
            temp = temp->next;
        }
        free(*tail);
        *tail = temp;
        (*tail)->next = *head;
    }
    
}

void DeleteAtPos(PPNODE head,PPNODE tail,int Pos)
{
    PNODE temp = NULL;

    int Size = 0;

    Size = Count(*head,*tail);

    if(Pos < 1 || Pos > Size)
    {
        printf("Invalid position\n");
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(Pos == Size)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;
        PNODE tempdelete = NULL;

        for(int i = 1; i < Pos-1; i++)
        {
            temp = temp->next;
        }
        tempdelete = temp->next;
        temp->next = tempdelete->next;
        free(tempdelete);
    }
}

int main()
{
    int iRet = 0;
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,51);
    InsertLast(&first,&last,101);

    InsertAtPos(&first,&last,75,4);

    Display(first,last);

    iRet = Count(first,last);
    printf("Number of elements are: %d\n",iRet);

    DeleteAtPos(&first,&last,4);

    DeleteLast(&first,&last);

    DeleteFirst(&first,&last);

    Display(first,last);

    iRet = Count(first,last);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}