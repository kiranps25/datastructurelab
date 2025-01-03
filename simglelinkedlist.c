#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node*link;
};
struct node*header=NULL;
void insertf()
{
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("no space available");
    }
    else
    {

        printf("enter the element to enter: ");
        scanf("%d",&newnode->data);
        newnode->link = NULL;
        if(header==NULL)
        {
            header = newnode;
        }
        else
        {
            newnode->link = header;
            header = newnode;
            
        }
        printf("%d inserted at first ", newnode->data);
    }
}
void display()
{
    struct node *temp = header;
    if(temp==NULL)
    {
        printf("list is empty");
        return ;
    }
    while(temp!=NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->link;
    }
}
void insertl()
{
    struct node *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = header;
    newnode->link = NULL;
    if(newnode==NULL)
    {
        printf("list is empty ");
    }
    else
    {
        printf("enter the element to insert at last: ");
        scanf("%d", &newnode->data);
        while (temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
        printf("%d inserted at last", newnode->data);
    }
}
void insertlo()
{
    int key;
    struct node *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the value of the node after which the new node should be inserted: ");
    scanf("%d", &key);
    temp = header;
    newnode->link = NULL;
    while (temp!=NULL&&temp->data!=key)
        {
            temp = temp->link;
        }
    if (temp==NULL)
    {
        printf("there is no value %d\n", key);
        return;
    }
    
    
    if(newnode==NULL)
    {
        printf("list is empty");

    }
    else
    {
        printf("enter the element to insert after %d: ",key);
        scanf("%d", &newnode->data);
        
        newnode->link = temp->link;
        temp->link = newnode;
            printf("%d is inserted after %d", newnode->data, key);

    }
}
void deletef()
{
    struct node *temp = header;
    if(header==NULL)
    {
        printf("list is empty");
    }
    header = temp ->link;
    printf("%d deleted", temp->data);
    free(temp);
    
}
void deletel()
{
    struct node *temp = header, *prev = NULL;
    if(header==NULL)
    {
        printf("list is empty");
    }
    if(temp->link==NULL)
    {
        printf("%d deleted\n",temp->data);      //first element
        free(temp);
        header = NULL;
        return;
    }
    while (temp->link!=NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = NULL;
    printf("%d deleted", temp->data);
    free(temp);
}
void deletelo()
{
    int key;
    printf("\nEnter the value of the node to be deleted: ");
    scanf("%d", &key);
    struct node *temp = header, *prev = NULL;
    if(temp==NULL)
    {
        printf("list is empty");
        return;
    }
    if(temp->data==key)
    {
        printf("%d deleted", temp->data);
        header = temp->link;
        free(temp);
        return;
    }
    while (temp!=NULL&&temp->data!=key)
    {
        prev = temp;
        temp = temp->link;
    }
    if(temp==NULL)
    {
        printf("%dthe value does not exist", key);
        return;
    }

    prev->link = temp->link;
    printf("%d deleted", temp->data);
    free(temp);
}    
int main()
{
    int choice;
    do{
        printf("\n1.insert first\n2.display\n3.exit\n4.insertlast\n5.insert at location\n6.delete first\n7.delete last\n8.delete from locaton\n");
        printf("enter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1/* constant-expression */:
            insertf();
            /* code */
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        case 4:
            insertl();
            break;
        case 5:
            insertlo();
            break;
        case 6:
            deletef();
            break;
        case 7:
            deletel();
            break;
        case 8:
            deletelo();
            break;
        default:
            break;
        }
    } while (choice != 9);
    return 0;
}
