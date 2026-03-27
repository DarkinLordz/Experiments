#include <stdio.h>
#include <string.h>

int main(){

    char arr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
    char string[] = "Hello, world!";

    printf("The size of the array is: %d\nThe size of the string is: %d\n", sizeof(arr), sizeof(string));

    return 0;
}