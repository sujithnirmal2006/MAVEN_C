//Output Explanation:
//Stores a date using bit-fields (day=5 bits, month=4 bits, year=14 bits),
//prints the formatted date, and displays the memory occupied by the structure.

//Learning:
//Learned how bit-fields allocate a specific number of bits to structure members,
//helping optimize memory usage while restricting values to a defined range.

//Bit-field Breakdown:
//day   : 5 bits  -> range 0 to 31
//month : 4 bits  -> range 0 to 15
//year  : 14 bits -> range 0 to 16383

#include<stdio.h>
struct date
{
    unsigned int day: 5;
    unsigned int month : 4;
    unsigned int year : 14;

};
int main()
{
    struct date d= {15,6,2026};
    printf("printing today's date:\n ");
    printf("Day : %02u\n",d.day);
    printf("Month : %02u\n",d.month);
    printf("Year : %04u\n",d.year);
    printf("Size of structure : %zu\n",sizeof(struct date));
return 0;    
}
