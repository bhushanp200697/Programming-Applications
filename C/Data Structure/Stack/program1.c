//stack

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


void Push(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    newn->next = *Head;
    *Head = newn;
}

void Pop(PPNODE Head)
{
    int no= 0;

    if(*Head == NULL)
    {
        printf("Stack is empty \n");
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
    printf("Elements from stack are :\n");

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

    Push(&First, 11);
    Push(&First, 21);
    Push(&First, 51);
    Push(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of elemenys in stack: %d\n",iRet);

    Pop(&First);
    Pop(&First);

    Display(First);

    iRet = Count(First);
    printf("Number of elemenys in stack: %d\n",iRet);

    return 0;
}
