#include <stdio.h>
/**
 * main - prints a fibonaci 
 *
 * 
 * Return:  0.
 */
int main() {
    
    unsigned int prev = 1;
    unsigned int current = 2;

    printf("%u, %u", prev, current);

    
    for (int i = 3; i <= 98; i++) {
        
        unsigned int next = prev + current;

        printf(", %u", next);

        
        prev = current;
        current = next;
    }

    printf("\n");

    return 0;
}
