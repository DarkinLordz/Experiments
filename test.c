#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { // LMAO
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
