#include<stdio.h>
int main(){
    int arr[20],n,sum=0;
    printf("enter the SIZE");
    scanf("%d",&n);
    printf("enter the %d elements in the array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\ntotal %d",sum);
}
