#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;

};
int main()
{
    struct date d= {15,6,2026};
    printf("printing today's date:\n ");
    printf("Day : %02d\n",d.day);
    printf("Month : %02d\n",d.month);
    //So %02d is commonly used for days, months, hours, minutes, and seconds to display them in a standard two-digit format.
    printf("Year : %04d\n",d.year);
    printf("Size of structure : %zu\n",sizeof(struct date));
return 0;    
}
