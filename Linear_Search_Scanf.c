#include<stdio.h>
int main(){
    int n,i,item;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d elements of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a search item: ");
    scanf("%d",&item);

    for(i=0;i<n;i++){
        if(arr[i]==item){
            printf("Item found at index: %d",i);
            return 0;
        }
    }
    printf("Item not found");
    return 0;
}