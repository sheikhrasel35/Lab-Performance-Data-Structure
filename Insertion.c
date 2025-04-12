#include<stdio.h>

int main(){
    int arr[100]={2,3,4,5,1,23};
    int n=6;

    printf("Original array:");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    int item=0;
     int k=5;
     int j=n-1;
     n=n+1;

     while(j>=k){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[k]=item;
    printf("After insertion:");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}