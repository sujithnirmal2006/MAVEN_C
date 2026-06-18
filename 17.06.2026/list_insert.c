/*//Output:
//Creates a singly linked list, inserts a new node at a specified position,
//and displays the updated linked list.

//Learning:
//Learned how to insert a node at any position by traversing the list and
//updating pointer links without losing existing nodes.

//Key Concept:
//newnode->next = temp->next;
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newnode = NULL;

    // Create Linked List
    for(int i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Insert at Specific Position
    int data, pos;

    printf("\nEnter data to insert: ");
    scanf("%d", &data);

    printf("Enter position: ");
    scanf("%d", &pos);

    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;

    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;

        for(int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            printf("Invalid Position\n");
            free(newnode);
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    // Display List
    printf("\nLinked List:\n");

    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free Memory
    temp = head;
    while(temp != NULL)
    {
        struct Node *nextnode = temp->next;
        free(temp);
        temp = nextnode;
    }

    return 0;
}


//temp->next = newnode;
//Insertion requires changing links in the correct order.
*/
