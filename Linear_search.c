#include<stdio.h>
int main(){
    int arr[]={3,5,6,7,2,9};
    int item=2;

    for(int i=0;i<6;i++){
        if(arr[i]==item){
            printf("Item found at index: %d\n",i);
            return 0;
        }
    }
    printf("Item not found\n");
    return 0;
}

