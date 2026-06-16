//Output Explanation: Displays a date stored in a structure with formatted output (%02d for leading zeros) and shows the total size of the structure in memory.
//Learning: Learned how to define, initialize, and access structure members, use format specifiers in printf(), and check structure size using sizeof().
Learning: Learned how to define, initialize, and access structure members, use format specifiers in printf(), and check structure size using sizeof().
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
