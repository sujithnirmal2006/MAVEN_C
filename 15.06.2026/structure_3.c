//Output:
//Displays the memory size of structures containing bit-fields defined with
//unsigned int and unsigned char data types.

//Learning:
//Learned that bit-fields can be declared using different integer types and
//that structure size depends on compiler alignment and storage allocation rules.

//Key Concept:
//withint: a(3 bits) + b(5 bits) = 8 bits.
//withchar: a(3 bits) + b(8 bits) + c(3 bits) = 14 bits.
//Actual structure size may be larger than the total bits due to padding and alignment.
#include<stdio.h>
struct withint
{
    unsigned int a : 3;
    unsigned int b : 5;
};
struct withchar
{
    unsigned char a: 3;
    unsigned char b: 8;
    unsigned char c : 3;
};
int main(){
    printf("Size of the Struct(withint) : %zu\n",sizeof(struct withint));
     printf("Size of the Struct(withchar) : %zu",sizeof(struct withchar));
}
