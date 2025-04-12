#include<stdio.h>
int main(){
    int arr[100]={2,6,7,8,9,0,1,2};
    int n=8;
    int pos=5;
    int j=pos;

    printf("Original array:");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    while(j<n){
        arr[j]=arr[j+1];
        j=j+1;
    }
    n=n-1;

    printf("Array after deletion: ");
    for(int i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}