#include<stdio.h>

struct ticket{
    int ticketno;
    char passengername[50];
    char source[50];
    char destination[50];
    float fare;
};

void ticketdetails(struct ticket tic);

int main(){
    struct ticket tic;
    printf("enter ticket number:");
    scanf("%d",&tic.ticketno);
    printf("enter passenger name:");
    scanf("%s",tic.passengername);
    printf("enter source:");
    scanf("%s",tic.source);
    printf("enter destination:");
    scanf("%s",tic.destination);
    printf("train fare:");
    scanf("%f",&tic.fare);
    ticketdetails(tic);
    
}

void ticketdetails(struct ticket tic){
    printf("ticket_no: %d\n",tic.ticketno);
    printf("passenger_name: %s\n",tic.passengername);
    printf("source: %s\n",tic.source);
    printf("destination: %s\n",tic.destination);
    printf("train fare: %f\n",tic.fare);
}
