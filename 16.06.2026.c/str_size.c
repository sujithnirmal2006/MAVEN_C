#include<stdio.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    struct node n;
    printf("size of data: %zu bytes\n",sizeof(n.data));
    printf("size of pointer next: %zu bytes\n",sizeof(n.next));
    printf("size of structure: %zu  bytes\n",sizeof(struct node));
    return 0;
}
