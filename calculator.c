#include <stdio.h>

int main(void){
    float num1;
    float num2;
    float result;
    char operator;

    int matched = 0;

    printf("Enter first number: ");
    matched += scanf("%f", &num1);
    printf("Enter second number: ");
    matched += scanf("%f", &num2);
    printf("Enter operator: ");
    scanf(" %c", &operator);

    if (matched != 2){
        printf("Invalid number");
        return 1;
    }

    if (operator == '+'){
        result = num1 + num2;
    } else if (operator == '-'){
        result = num1 - num2;
    } else if (operator == '*'){
        result = num1 * num2;
    } else if (operator == '/'){
        result = num1 / num2;
    } else {
        printf("Invalid operator");
        return 1;
    }

    printf("%f\n", result);

    return 0;
}
