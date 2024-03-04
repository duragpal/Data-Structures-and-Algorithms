#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int top;
    int* arr;
};

struct Stack* createStack(int size)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->arr = (int*)malloc(stack->size * sizeof(int));
    return stack;
}

int isEmpty(struct Stack* ptr){
 if(ptr->top==-1){
    return 1;
 }
 else{
    return 0;
 }
}
int isFull(struct Stack* ptr){
if(ptr->top==ptr->size-1){
    return 1;
}    
else{
    return 0;
}
}

void Push(struct Stack* ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow....");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int Pop(struct Stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow....");
        return -1;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

void Display(struct Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Stack is Empty...\n");
    } else {
        printf("Stack contents:\n");
        for (int i =0; i <=stack->top; i++) {
            printf("%d  ", stack->arr[i]);
        }
    }
}

int main(){
    //struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
   // sp->size=10;
    //sp->top=-1;
    //sp->arr=(int*)malloc(sp->size * sizeof(int));
   // printf("Stack Created....");
    int size;
    printf("Enter the size of stack: ");
    scanf("%d",&size);
    struct Stack* stack = createStack(size);
   
   Push(stack,50);
   
  
   Push(stack, 10);
    Push(stack, 20);
    Push(stack, 30);
    Display(stack);
    printf("\n%d popped from stack\n", Pop(stack));
    Display(stack);
  
 

return 0;
}