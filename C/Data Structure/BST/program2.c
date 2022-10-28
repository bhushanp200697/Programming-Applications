//Search the Element is there in the tree or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int iNo)
{
    PNODE temp = *Head;    
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = iNo;
    newn -> lchild = NULL;
    newn -> rchild = NULL;
    
    if(*Head == NULL)
    {
    	*Head = newn;
    }
    
    else
    {
    	while(1)
    	{
    		if(iNo > temp -> data)
    		{
    			if(temp -> rchild == NULL)
    			{
    				temp -> rchild = newn;
    				break;
    			}
    			temp = temp -> rchild;
    		}
    		
    		else if(iNo < temp -> data)
    		{
    			if(temp -> lchild == NULL)
    			{
    				temp -> lchild = newn;
    				break;
    			}
    			temp = temp -> lchild;
    		}
    		
    		else if(iNo == temp -> data)
    		{
    			free(newn);
    			printf("Data is already there in BST");
    			break;
    		}
    	}
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
    	Inorder(Head -> lchild);
    	printf("%d ", Head -> data);
    	Inorder(Head -> rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
    	printf("%d ", Head -> data);
    	Preorder(Head -> lchild);
    	Preorder(Head -> rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {    	
    	Postorder(Head -> lchild);
    	Postorder(Head -> rchild);
    	printf("%d ", Head -> data);
    }
}

bool Search(PNODE Head, int iNo)
{
    bool flag = false;
    
    if(Head == NULL)
    {
    	printf("BST is empty\n");
    	return flag;
    }
    
    while(Head != NULL)
    {
    	if(Head -> data == iNo)
    	{
    		flag = true;
    		break;
    	}
    	
    	else if(iNo > Head -> data)
    	{
    		Head = Head -> rchild;
    	}
    	
    	else if(iNo < Head -> data)
    	{
    		Head = Head -> lchild;
    	}
    }
    
    return flag;
}

int main()
{
    PNODE First = NULL;
    bool bret = false;
    
    Insert(&First, 11);
    Insert(&First, 21);
    Insert(&First, 7);
    
    printf("\nInorder data :\n");
    Inorder(First);
    
    printf("\nPreorder data :\n");
    Preorder(First);
    
    printf("\nPostorder data :\n");
    Postorder(First);
    
    bret = Search(First, 8);
    if(bret == true)
    {
    	printf("\nElement is there in the tree\n");
    }
    
    else
    {
    	printf("\nThere is no element in tree\n");
    }
    
    return 0;
}
