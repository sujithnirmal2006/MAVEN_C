#include <stdio.h>

struct order
{
    int orderid;
    char product[50];
    float price;
};

void calculategst(struct order ord);

int main()
{
    struct order ord;

    printf("Enter Order ID: ");
    scanf("%d", &ord.orderid);

    printf("Enter Product Name: ");
    scanf("%s", ord.product);

    printf("Enter Product Price: ");
    scanf("%f", &ord.price);

    calculategst(ord);

    return 0;
}

void calculategst(struct order ord)
{
    float gst, total;

    gst = ord.price * 0.18;   // 18% GST
    total = ord.price + gst;

    printf("\n----- Order Details -----\n");
    printf("Order ID      : %d\n", ord.orderid);
    printf("Product Name  : %s\n", ord.product);
    printf("Product Price : %.2f\n", ord.price);
    printf("GST (18%%)     : %.2f\n", gst);
    printf("Total Amount  : %.2f\n", total);
}
