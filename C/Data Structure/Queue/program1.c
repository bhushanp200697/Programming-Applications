//Queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Enqueue(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head== NULL)
    {
        *Head= newn;
    }
    else
    {
        PNODE temp = *Head;

        while(temp->next != NULL)
        {
            temp= temp->next;
        }
        temp->next= newn;
    }
}

void Dequeue(PPNODE Head)
{
    int no= 0;

    if(*Head == NULL)
    {
        printf("Queue is empty \n");
        return;
    }

    no = (*Head)->data;
    PNODE temp = *Head;
    *Head = (*Head)->next;
    free(temp);

    printf("Removed element is: %d\n", no);
}

void Display(PNODE Head)
{
    printf("Elements from Queue are :\n");

    while(Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Enqueue(&First, 11);
    Enqueue(&First, 21);
    Enqueue(&First, 51);
    Enqueue(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of elemenys in queue: %d\n",iRet);

    Dequeue(&First);
    Dequeue(&First);

    Display(First);

    iRet = Count(First);
    printf("Number of elemenys in queue: %d\n",iRet);

    return 0;
}
