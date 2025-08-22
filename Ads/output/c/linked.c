#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void main(){
 struct Node* first = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct node* head = NULL;
    
first->data=2;
first->next=second;
second->data=5;
second->next=third;
third->data=8;
third->next=NULL;
head=first;



struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data = 10; 
newnode->next = head; // Insert after the first node
head = newnode; 

struct Node* temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL");

    struct node* newnode=(struct Node*)malloc(sizeof(struct Node));
    

}