#include <stdio.h>
#include <stdlib.h> //malloc() and free()

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n;
   
    printf("Enter the number of nodes: ");
    scanf("%d",&n); //5

    struct Node *head=NULL, *temp=NULL, *newnode=NULL;

    for(int i=0;i<n;i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));

        if(newnode==NULL)
        {
            printf("Memory Allocation Failed\n");
            return 1;
        }

        printf("Enter the data for the node %d: ",i+1);
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    //reset
    temp=head;
    while(temp!=NULL)
    {
        printf("Data : %d | Node Address : %p | Next Node Address : %p\n",temp->data,temp,temp->next);

        printf("\n");
        temp=temp->next;
    }    

    //free
    temp=head;
    while(temp!=NULL)
    {
        struct Node *nextnode=temp->next;
        free(temp);
        temp=nextnode;
    }

    return 0;
}
