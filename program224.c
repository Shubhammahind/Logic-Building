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

int SecMax(PNODE head)
{
    PNODE fast = NULL;
    PNODE slow = NULL; 
        
    fast = (head)->next;
    slow = head;
    int iFlag  = 0;
    int cnt = Count(head);
    while(cnt)
    {
        while(fast != NULL)
        {
            if(slow->data < fast->data)
            {
                int temp = slow->data;
                slow->data = fast->data;
                fast->data = temp;

                iFlag = 1;
            }
                slow = fast;
                fast = fast->next;
        }
        if(!iFlag)
        {
            return head->next->data;
        }

        fast = (head)->next;
        slow = head;
        cnt--;
    }

       return head->next->data;
}


int main()
{
    PNODE first = NULL;
    int iRet = 0, no;

    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);
    
    Display(first);
    iRet = SecMax(first);
    Display(first);
    printf("second max : %d", iRet);


    return 0;
}