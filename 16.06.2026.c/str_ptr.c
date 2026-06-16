#include<stdio.h>
struct electricitybill{
    int consumber_no;
    float units;
};

void calculateebill(struct electricitybill *e);

int main(){
    struct electricitybill e;
    printf("enter the consumber_no:");
    scanf("%d",&e.consumber_no);
    printf("enter units:");
    scanf("%f",&e.units);
    calculateebill(&e);
}

void calculateebill(struct electricitybill *e){
    float bill = e-> units * 8.5;
    printf("consumber_no: %d\n",e->consumber_no);
    printf("electricitybill: %.2f",bill);
}
