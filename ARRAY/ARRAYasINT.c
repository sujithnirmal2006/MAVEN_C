//Internally C represent every character using ASCII character code. ASCII is a fixed integer value for each global printable or non-printable characters.
//For example – ASCII value of a=97, b=98, A=65 etc. Therefore, you can treat characters in C as integer and can perform all basic arithmetic operations on character.

#include<stdio.h>
int main(){
    int i;
    printf("printing the alphabets using array");
    for(int i=97;i<=122;i++){
        printf("%C ",i);
    }
}
