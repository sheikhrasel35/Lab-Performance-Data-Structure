#include<stdio.h>
int main(){
    int arr[]={2,5,67,56,33,22};
    int n=6;
    int i,j;
    
    printf("Unsorted array: ");
    for(i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}