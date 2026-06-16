#include<stdio.h>
struct employee{
    int empid;
    float salary;
};

void calculatebonus(int empid,float salary,float bonus);

int main(){
    struct employee e;
    float bonus;
    printf("enter the EM_ID: ");
    scanf("%d",&e.empid);
    printf("enter the salary: ");
    scanf("%f",&e.salary);
    printf("enter the bonus percentage: ");
    scanf("%f",&bonus);
    calculatebonus(e.empid,e.salary,bonus);
    return 0;
}
void calculatebonus(int empid,float salary,float bonus){
    float bonus1=salary * bonus / 100;
    float total_salary = bonus1 + salary;
    printf("employee ID: %d\n",empid);
    printf("salary: %.2f\n",salary);
    printf("bonus percentage: %.2f%%\n",bonus);
    printf("bonus amopunt %.2f\n",bonus1);
    printf("final salary %2.f\n",total_salary);
    
    
}
