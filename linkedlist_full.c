#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct Node
{
    int data;
    struct Node *next;
};

// Head Pointer
struct Node *head = NULL;

// Insert at Beginning
void insertBeginning(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;

    head = newNode;

    printf("Node Inserted at Beginning.\n");
}

// Insert at End
void insertEnd(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    printf("Node Inserted at End.\n");
}

// Insert at Position
void insertPosition(int value, int pos)
{
    struct Node *newNode, *temp;
    int i;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;

    if(pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;

    for(i=1;i<pos-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Invalid Position\n");
        free(newNode);
        return;
    }

    newNode->next=temp->next;
    temp->next=newNode;

    printf("Node Inserted.\n");
}

// Delete Beginning
void deleteBeginning()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List Empty\n");
        return;
    }

    temp=head;

    head=head->next;

    free(temp);

    printf("First Node Deleted.\n");
}

// Delete End
void deleteEnd()
{
    struct Node *temp,*prev;

    if(head==NULL)
    {
        printf("List Empty\n");
        return;
    }

    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return;
    }

    temp=head;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=NULL;

    free(temp);

    printf("Last Node Deleted.\n");
}

// Delete Position
void deletePosition(int pos)
{
    struct Node *temp,*prev;
    int i;

    if(head==NULL)
    {
        printf("List Empty\n");
        return;
    }

    if(pos==1)
    {
        temp=head;
        head=head->next;
        free(temp);
        return;
    }

    temp=head;

    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;

        if(temp==NULL)
        {
            printf("Invalid Position\n");
            return;
        }
    }

    prev->next=temp->next;

    free(temp);

    printf("Node Deleted.\n");
}

// Search
void search(int key)
{
    struct Node *temp=head;
    int pos=1;

    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("Element Found at Position %d\n",pos);
            return;
        }

        temp=temp->next;
        pos++;
    }

    printf("Element Not Found\n");
}

// Display
void display()
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("List Empty\n");
        return;
    }

    printf("\nLinked List:\n");

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice,value,pos;

    while(1)
    {
        printf("\n");
        printf("===== LINKED LIST MENU =====\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert End\n");
        printf("3. Insert Position\n");
        printf("4. Delete Beginning\n");
        printf("5. Delete End\n");
        printf("6. Delete Position\n");
        printf("7. Search\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Value : ");
                scanf("%d",&value);
                insertBeginning(value);
                break;

            case 2:
                printf("Enter Value : ");
                scanf("%d",&value);
                insertEnd(value);
                break;

            case 3:
                printf("Enter Value : ");
                scanf("%d",&value);
                printf("Enter Position : ");
                scanf("%d",&pos);
                insertPosition(value,pos);
                break;

            case 4:
                deleteBeginning();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter Position : ");
                scanf("%d",&pos);
                deletePosition(pos);
                break;

            case 7:
                printf("Enter Element to Search : ");
                scanf("%d",&value);
                search(value);
                break;

            case 8:
                display();
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}