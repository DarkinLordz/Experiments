#include <stdio.h>
#include <stdlib.h>

float convert(float temperature, char unit){
    if (unit == 'c'){
        return (temperature * 9/5) + 32;
    } else if (unit == 'f'){
        return (temperature - 32) * 5/9;
    } else{
        return 0;
    }
}

int main(int argc, char *argv[]){
    if (argc != 3){
        return 1;
    }
    
    float temperature = atoi(argv[1]);
    char unit = argv[2][0];

    float result = convert(temperature, unit);

    printf("%f\n", result);
    
    return 0;
}