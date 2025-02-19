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

void DisplayLargest(PNODE head)
{
    PNODE fast = NULL;
        
    fast = head;
    int imax = 0;
    while(fast != NULL)
    {
        imax = 0;
        int data = fast->data;
        while(data)
        {
            int digit = data % 10;
            if(digit > imax)
            {
                imax = digit;
            }
            data = data / 10;
        }
        printf("%d ", imax);
        
        fast = fast->next;
    }        
    
}


int main()
{
    PNODE first = NULL;
    int iRet = 0, no;

    InsertFirst(&first,419);
    InsertFirst(&first,532);
    InsertFirst(&first,250);
    InsertFirst(&first,11);
    
    Display(first);
    DisplayLargest(first);

   


    return 0;
}