#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    struct Node* top;
};

// Function to check if the stack is empty
int is_empty(struct Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    new_node->data = data;
    new_node->next = stack->top;
    stack->top = new_node;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (is_empty(stack)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }

    struct Node* temp = stack->top;
    int popped_data = temp->data;
    stack->top = temp->next;
    free(temp);

    return popped_data;
}

// Function to peek at the top element of the stack
int peek(struct Stack* stack) {
    if (is_empty(stack)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }

    return stack->top->data;
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    struct Node* current = stack->top;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Example usage
int main() {
    struct Stack stack;
    stack.top = NULL;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Stack after pushes:\n");
    display(&stack);

    printf("Peek: %d\n", peek(&stack));

    int popped_item = pop(&stack);
    printf("Popped item: %d\n", popped_item);

    printf("Stack after pop:\n");
    display(&stack);

    return 0;
}
