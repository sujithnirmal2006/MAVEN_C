#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
};

int main()
{
int n, choice;

struct Node *head = NULL;
struct Node *temp = NULL;
struct Node *newnode = NULL;

printf("Enter the number of nodes: ");
scanf("%d", &n);

// Create initial linked list
for (int i = 0; i < n; i++)
{
newnode = (struct Node *)malloc(sizeof(struct Node));

if (newnode == NULL)
{
printf("Memory allocation failed!\n");
return 1;
}

printf("Enter data for node %d: ", i + 1);
scanf("%d", &newnode->data);

newnode->next = NULL;

if (head == NULL)
{
head = newnode;
temp = head;
}
else
{
temp->next = newnode;
temp = newnode;
}
}

while (1)
{
printf("\n===== MENU =====\n");
printf("1. Insert at Beginning\n");
printf("2. Insert at End\n");
printf("3. Traverse Linked List\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
{
newnode = (struct Node *)malloc(sizeof(struct Node));

if (newnode == NULL)
{
printf("Memory allocation failed!\n");
break;
}

printf("Enter data: ");
scanf("%d", &newnode->data);

newnode->next = head;
head = newnode;

printf("Node inserted at the beginning.\n");
break;
}

case 2:
{
newnode = (struct Node *)malloc(sizeof(struct Node));

if (newnode == NULL)
{
printf("Memory allocation failed!\n");
break;
}

printf("Enter data: ");
scanf("%d", &newnode->data);

newnode->next = NULL;

if (head == NULL)
{
head = newnode;
}
else
{
temp = head;

while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = newnode;
}

printf("Node inserted at the end.\n");
break;
}

case 3:
{
if (head == NULL)
{
printf("Linked List is empty.\n");
}
else
{
printf("\nLinked List:\n");

temp = head;

while (temp != NULL)
{
printf("Data = %d | Node Address = %p | Next Address = %p\n",
temp->data,
(void *)temp,
(void *)temp->next);

temp = temp->next;
}
}
break;
}

case 4:
{
temp = head;

while (temp != NULL)
{
struct Node *nextnode = temp->next;
free(temp);
temp = nextnode;
}

printf("Memory freed. Exiting...\n");
return 0;
}

default:
printf("Invalid choice!\n");
}
}

return 0;
}
