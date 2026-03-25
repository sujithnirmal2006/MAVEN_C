// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int SIZE;
    printf("enter size :");
    scanf("%d",&SIZE);
    int source[SIZE],copy[SIZE];
    for(int i=0;i<SIZE;i++){
        scanf("%d",&source[i]);
        copy[i]=source[i];
    }
    for(int i=0;i<SIZE;i++){
        if(i==3){
            continue;
        }
        else{
            printf("%d\t",copy[i]);
        }
    }
    return 0;
}
