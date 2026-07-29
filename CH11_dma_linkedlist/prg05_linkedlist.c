#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
} *head = NULL;

void insert(int data){
    struct Node *temp, *new;
    new = (struct Node *) malloc(sizeof(struct Node *));
    new->data = data;
    new->next = NULL;
    if(head == NULL){
        head = new;
        printf("%d inserted!!\n",data);
        return;
    }
    temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new;

    printf("%d inserted!!\n",data);
}

void delete(int data){
    struct Node *temp;
    if(head == NULL){
        printf("There is no data to delete..\n");
        return;
    }
    temp = head;
    while(temp){
        if(temp->next){
            if(temp->next->data == data){
                temp->next = temp->next->next;
                printf("[%d] element deleted!!\n",data);
            }
        }else{
            printf("\n[%d] element is not found!!\n",data);
        }
        temp = temp->next;
    }
}

void search(int data){
    int f = 0;
    struct Node *temp;
    if(head == NULL){
        printf("There is no data to search..\n");
        return ;
    }
    temp = head;
    while(temp){
        if(temp->data == data){
            f = 1;
            printf("Element [%d] found!!\n",data);
        }
        temp = temp->next;
    }
    if(!f){
        printf("There is no [%d] element...\n",data);
    }
}

void display(){
    struct Node *temp;

    if(head == NULL){
        printf("There is no data stored....\n");
        return;
    }
    temp = head;
    printf("\n");
    while(temp){
        printf("\t%d => ",temp->data);
        if(temp->next){
            printf("%d ",temp->next->data);
        }
        else{
            printf("NULL");
        }
        temp = temp->next;
    }
    printf("\n");
}

void main(){
    int choice;
    int data;

    do{
        printf("\n=======Options!!=======\n");
        printf("\n 1. for insertion: ");
        printf("\n 2. for deletion: ");
        printf("\n 3. for search: ");
        printf("\n 4. for display: ");
        printf("\n 5. for exit: ");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter data to insert: ");
                scanf("%d",&data);
                insert(data);
                break;

            case 2:
                printf("Enter data to delete: ");
                scanf("%d",&data);
                delete(data);
                break;

            case 3:
                printf("Enter data to search: ");
                scanf("%d",&data);
                search(data);
                break;

            case 4:
                display();
                break;

            default:
                exit(0);
                break;
        }
    } while(1);
}