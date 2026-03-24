#include<stdio.h>
int main(){
    int num;
    printf("enter num:");
    scanf("%d",&num);
    printf("printing even numbers to %d\n",num);
    for(int i=0;i<num;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
