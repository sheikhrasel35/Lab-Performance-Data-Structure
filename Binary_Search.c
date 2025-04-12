#include<stdio.h>
int main(){
    int arr[]={4,7,23,32,54,88};
    int search_item=54;
    int left,right,mid;
    left=0;
    right=5;

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