#include <stdio.h>

int main() {
    char op;
    int a, b;

    // 1. Get input from the user
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c, it prevents bugs!
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // 2. Calculate using switch case
    switch (op) {
        case '+': 
            printf("Result: %d\n", a + b); 
            break;
        case '-': 
            printf("Result: %d\n", a - b); 
            break;
        case '*': 
            printf("Result: %d\n", a * b); 
            break;
        case '/': 
            if (b != 0) 
                printf("Result: %d\n", a / b);
            else 
                printf("Cannot divide by zero!\n");
            break;
        default: 
            printf("Invalid operator!\n");
    }

    return 0;
}
