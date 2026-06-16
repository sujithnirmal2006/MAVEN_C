//Output:
//Prints the integer values of the Day enumeration constants from Monday to Sunday.
//Since enums start at 0 by default, the output will be: 0123456.

//Learning:
//Learned how to define and use an enumeration (enum) to represent a set of named constants.
//Also learned that enum values are assigned sequential integer values starting from 0 by default.

//Key Concept:
//Monday=0, Tuesday=1, Wednesday=2, Thursday=3,
//Friday=4, Saturday=5, Sunday=6.

#include<stdio.h>
enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    for(int i=Monday;i<=Sunday;i++)
    printf("%d",i);
}
