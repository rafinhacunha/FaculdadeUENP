#include <stdio.h>

int main() {
    int index = 3;

    while (index < 50) {
        if (index % 3 == 0) {
            printf("%i ", index); 
        }
        index++; 
    }

    return 0;
}