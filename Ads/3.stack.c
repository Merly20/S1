#include<stdio.h>
int main(){
int top=-1;
int stack[50];



if (top==5)
{
printf("stack is full");
}
else{


printf("Enter 5 items:");
for (int i = 0; i < 5; i++)
{
    scanf("%d",&stack[i]);
stack[top]=stack[i];
   top++;

}

for (int i = 0; i < 5; i++)
{
    /* code */


printf("%d",stack[i]);
}
}
}





    
