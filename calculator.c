#include <stdio.h>

int main(void){
    float num1;
    float num2;
    float result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator: ");
    scanf(" %c", &operator);

    if (operator == '+'){
        result = num1 + num2;
    } else if (operator == '-'){
        result = num1 - num2;
    } else if (operator == '*'){
        result = num1 * num2;
    } else if (operator == '/'){
        result = num1 / num2;
    } else {
        printf("Invalid operator\n");
        return 1;
    }

    printf("%f\n", result);

    return 0;
}
