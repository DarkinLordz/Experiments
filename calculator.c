#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ // Simple ahh calculator

    if (argc != 4){
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    
    char operator = argv[2][0];
    
    int result = 0;

    if (operator == '+'){
        result = num1 + num2;
    } else if (operator == '-'){
        result = num1 - num2;
    } else if (operator == '*'){ 
        result = num1 * num2;
    } else if (operator == '/'){
        if (num2 == 0) {
            return 1;
        }
        result = num1 / num2;
    } else {
        return 1;
    }

    printf("%d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}
