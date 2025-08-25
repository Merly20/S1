#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void createnode(int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
    printf("node created succesfully\n");
}
void insertintermediate(int pos,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    if(pos==0){
        newnode->next=head;
        head=newnode;
    }
    else{
        struct Node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            printf("Position out of bounds\n");
            free(newnode);
            return;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    printf("Node inserted at position %d\n",pos);

}
int main(){
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int data;
        printf("Enter data for node %d:",i+1);
        scanf("%d",&data);
        createnode(data);
    }
    
}
