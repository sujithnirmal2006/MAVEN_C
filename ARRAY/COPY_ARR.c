#include <stdio.h>

int main() {
   
    int SIZE;
    printf("enter size :");
    scanf("%d",&SIZE);
    int source[SIZE],copy[SIZE];
    for(int i=0;i<SIZE;i++){
        scanf("%d",&source[i]);
        copy[i]=source[i];
    }
    for(int i=0;i<SIZE;i++){
    printf("%d\t",copy[i]);
    }
    return 0;
}
