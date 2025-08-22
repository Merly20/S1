#include <stdio.h>

int que[5];
int rear = -1;
int front = -1;

void enq(int val) {
    if (rear == 4) {
        printf("Queue Overflow\n");
    } else if (front == -1) {
        front = 0;
        rear = 0;
        que[rear] = val;
        printf("Enqueued: %d\n", que[rear]);
    } else {
        rear++;
        que[rear] = val;
        printf("Enqueued: %d\n", que[rear]);
    }
}
void deq(){
    if(rear==-1){
        printf("underflow");
    }else{
        int d=que[front];
        front++;
        printf(" deleted : %d",d);
    }
}

int main() {
    enq(5);
    enq(10);
    enq(15);
    deq();
    return 0;
}
