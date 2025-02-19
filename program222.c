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

void DisplayPrime(PNODE head)
{
   
    while(head)
    {
        int iflag = 0;
        for(int i = 2; i <= head->data / 2; i++)
        {
            if(head -> data % i == 0)
            {
                iflag = 1;
                break;
            }
        }

        if(!iflag)
        {
            printf("%d ", head->data);
        }
        head = head->next; 
    }
    
}


int main()
{
    PNODE first = NULL;
    int iRet = 0, no;

    InsertFirst(&first,89);
    InsertFirst(&first,22);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,20);
    InsertFirst(&first,11);

    
    Display(first);
    DisplayPrime(first);


    return 0;
}