//Output:
//Prints the integer values of the enum constants.
//Output: 11 12 13 20 21 22 23

//Learning:
//Learned that enum constants can be assigned custom values, and subsequent
//constants automatically increment from the previous value unless explicitly reassigned.

//Key Concept:
//Monday=11, Tuesday=12, Wednesday=13,
//Thursday=20, Friday=21, Saturday=22, Sunday=23.

#include<stdio.h>
enum Day
{
    Monday=11,
    Tuesday,
    Wednesday,
    Thursday=20,
    Friday,
    Saturday,
    Sunday
};
int main()
{
 
    printf("%d ",Monday);
    printf("%d ",Tuesday);
    printf("%d ",Wednesday);
    printf("%d ",Thursday);
    printf("%d ",Friday);
    printf("%d ",Saturday);
    printf("%d ",Sunday);

}
