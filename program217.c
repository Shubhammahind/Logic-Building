#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }

}

void InsertLast(PPNODE head, int no)
{ 
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

int Count(PNODE head)
{ 
    int iCount = 0;
    while(head)
    {
        iCount++;
        head = head -> next;
    }
    return iCount; 
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf(" %d ->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int SearchLastOcc(PNODE head,int no)
{
    int ipos = 1 , idx = 0;
    while(head)
    {
        if(head -> data == no)
        {
            idx = ipos;
        }
        head = head -> next;
        ipos++;
    }
    return idx;
}


int main()
{
    PNODE first = NULL;
    int iRet = 0, no;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    
    Display(first);
    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    printf("Enter element : ");
    scanf("%d", &no);
    iRet = SearchLastOcc(first, no);

    printf("%d",iRet);

    return 0;
}