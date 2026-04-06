#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));

    int num = (rand() % 10) + 1;
    int guess;

    if (argc == 2){
        const char *mode = argv[1];
        if (strcmp(mode, "debug") == 0){
            printf("%d\n", num);
        }
    }

    while (1){
        scanf("%d", &guess);
        if (guess == num){
            __asm__ volatile("leave\nret");
        } else if (guess > num){
            printf("Too high\n");
            continue;
        } else if (guess < num){
            printf("Too low\n");
            continue;
        }
    }
}
