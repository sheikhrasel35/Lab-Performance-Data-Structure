#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node* head=malloc(sizeof(struct Node));
    struct Node* second=malloc(sizeof(struct Node));
    struct Node* third=malloc(sizeof(struct Node));
    struct Node* fourth=malloc(sizeof(struct Node));

    head->data=241;
    second->data=35;
    third->data=505;
    fourth->data=88;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    struct Node* ptr=head;
    while(ptr !=NULL){
        printf(" %d ", ptr->data);
        ptr=ptr->next;
    }
    return 0;
}