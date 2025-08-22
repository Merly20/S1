#include<stdio.h>
int top=-1;
 int stack[5];
     
void push(int value){
    if(top==4){
        printf("stack is full");
    }
    else{
   top++;
   stack[top]=value;
   printf(" pushed %d",stack[top]);

        }
    }

void pop(){
    if(top==-1){
        printf("stack is empty");
    }else{
        int prnt=stack[top];
        //stack[top] = NULL;
        top--;
        printf("poped %d",prnt);
     

    }
}void get(){
       
        printf("get %d",stack[top]);
}
int main(){
     
  
   push(20);
   push(90);
   push(80);
pop();
get();
   
}