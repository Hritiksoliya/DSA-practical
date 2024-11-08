// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10
int top=-1;
int STK[MAX_SIZE];

bool isFull(){
    if(top==(MAX_SIZE-1))
    {
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else {
        return false;
    }
}
void push(int data){
    if(isFull()){
        printf("stack overflow\n");
        return;
    }
    else{
        top++;
        STK[top]=data;
        printf("Push Operation Done\n");
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
        return 0;
    }
    else{
        int temp=STK[top];
        top--;
        printf("Pop Operation Done\n");
        return temp;
    }
}
// int topOfStack(){
//     if(isEmpty()){
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     else{
//     return STK[top];
//     }
// }
int main() {
    
    int deleted_element;
    
    push(10);
    printf("Top of Stack :%d\n",STK[top]);
    push(19);
    printf("Top of Stack :%d\n",STK[top]);
    deleted_element=pop();
    printf("Top of Stack :%d\n",STK[top]);
    
    return 0;
}
