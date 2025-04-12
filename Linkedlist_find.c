#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
int main(){
    struct Node* head=malloc(sizeof(struct Node));
    struct Node* second=malloc(sizeof(struct Node));
    struct Node* third=malloc(sizeof(struct Node));

    head->data=241;
    second->data=35;
    third->data=505;

    head->next = second;
    second->next = third;
    third->next = NULL;

    int target_value=35;
    struct Node* ptr=head;
    while (ptr !=NULL)
    {
        if(ptr->data==target_value){
            printf("%d",ptr->data);
            break;
        }else{
           ptr=ptr->next;
        }
        if(ptr==NULL){
            printf("Item not found");
        }
    }
    
    return 0;
}