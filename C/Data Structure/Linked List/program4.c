#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertfirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL && *tail == NULL)
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void display(PNODE head, PNODE tail)
{
    if((head) ==NULL && (tail) ==NULL)
    {
        printf("LL is empty\n");
        return;
    }

    printf("elements of LL are:\n");

    do
    {
        printf("%d -> ",head->data);
        head = head->next;
    }while(head != tail->next);

    printf("NULL\n");
}

int count(PNODE head, PNODE tail)
{    
    int i = 0;

    if(head==NULL && tail==NULL)
    {
        return 0;
    }

    do
    {
        i++;
        head = head->next;
    }while(head != tail->next);

    return i;
}

void insertlast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head==NULL && *tail==NULL)
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        newn->prev = *tail;
        *tail = newn;
    }
    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void insertatpos(PPNODE head, PPNODE tail, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int isize = 0;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    isize = count(*head, *tail);

    if(pos < 1 && pos > isize+1)
    {
        printf("invalid pos\n");
        return;
    }

    if(pos == 1)
    {
        insertfirst(head, tail, no);
    }
    else if(pos == isize+1)
    {
        insertlast(head,tail,no);
    }
    else
    {
        temp = *head;

        for(int i=1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        newn->next->prev = newn;
        newn->prev = temp;
    }

}

void deletefirst(PPNODE head, PPNODE tail)
{
    if(*head==NULL && *tail==NULL)
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
    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

void deletelast(PPNODE head, PPNODE tail)
{
    if(*head==NULL && *tail==NULL)
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
        *tail = (*tail)->prev;
        free((*tail)->next);
    }
    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void deleteatpos(PPNODE head, PPNODE tail, int pos)
{
    PNODE temp = NULL;

    int isize = 0;

    isize = count(*head, *tail);

    if(pos<1 || pos> isize)
    {
        printf("invalid pos\n");
        return;
    }

    if(pos == 1)
    {
        deletefirst(head,tail);
    }
    else if(pos == isize)
    {
        deletelast(head,tail);
    }
    else
    {
        temp = *head;

        for(int i=1; i< pos-1; i++)
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
    PNODE last = NULL;
    int iret = 0;

    insertfirst(&first,&last,21);
    insertfirst(&first,&last,11);

    insertlast(&first,&last,51);
    insertlast(&first,&last,101);

    insertatpos(&first,&last,75,4);

    display(first, last);
    
    iret = count(first,last);
    printf("no of ll elements are:%d\n",iret);

    deletefirst(&first,&last);

    deletelast(&first, &last);

    deleteatpos(&first,&last,2);

    display(first, last);
    
    iret = count(first,last);
    printf("no of ll elements are:%d\n",iret);

    return 0;
}