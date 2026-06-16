//Passing array of structures to functions as arguments
//Mobile Inventory
#include <stdio.h>

struct food
{
    int orderid;
    char item_name[30];
    float price;
    int quantity;
};

void calculateinvvalue(struct food foods[],int n);

int main()
{
    int n;
    printf("------KARUPPU HOTEL-----\n");
    printf("Enter the number of persons: ");
    scanf("%d",&n);;''

    struct food foods[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the order id: ");
        scanf("%d",&foods[i].orderid);

        printf("Enter the product name: ");
        scanf("%s",foods[i].item_name);

        printf("Enter the quantity: ");
        scanf("%d",&foods[i].quantity);

        printf("Enter the price: ");
        scanf("%f",&foods[i].price);
    }

    calculateinvvalue(foods,n);

    return 0;
}

void calculateinvvalue(struct food foods[],int n)
{
    float inventoryvalue;

    printf("\n");
    printf("------KARUPPU HOTEL-------\n");

    for(int i=0;i<n;i++)
    {
        inventoryvalue = foods[i].quantity * foods[i].price;

        printf("order ID : %d\n",foods[i].orderid);
        printf("ITEM Name: %s\n",foods[i].item_name);
        printf("FOOD Price : %.2f\n",foods[i].price);
        printf("FOOD Quantity : %d\n",foods[i].quantity);
        printf("Inventory Value : %.2f\n",inventoryvalue);

        printf("\n");
    }
}
