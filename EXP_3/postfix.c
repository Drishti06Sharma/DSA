#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    stack[++top] = value;
}

// Pop function
int pop() {
    return stack[top--];
}

int main() {
    char postfix[MAX];
    int i, op1, op2, result;

    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {

        // If operand, push into stack
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');  // Convert char to int
        }
        else {
            // Operator encountered
            op2 = pop();
            op1 = pop();

            switch (postfix[i]) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                case '^': result = op1 ^ op2; break; // Bitwise XOR (not power)
                default: 
                    printf("Invalid operator\n");
                    return 1;
            }

            push(result);
        }
    }

    printf("Result of Postfix Expression: %d\n", pop());

    return 0;
}
