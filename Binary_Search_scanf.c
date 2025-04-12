#include<stdio.h>
int main(){
    int n,left,right,mid;
    int search_item;
    
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d array of elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter search item: ");
    scanf("%d",&search_item);

    left=0;
    right= n-1;

    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==search_item){
            printf("Item found at index: %d",mid);
            return 0;
        }else if(arr[mid]<search_item){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    printf("Item not found");

    return 0;
}