#include <stdio.h>

int main(void){

    int x = 0;
    int y = 1;
    int z = 0;

    for (int i = 0; i<=10; i++){
        printf("%d\n", x);
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}