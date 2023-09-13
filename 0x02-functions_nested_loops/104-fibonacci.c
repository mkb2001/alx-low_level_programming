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

    int i = 3;

    while (i <= 98) {

        unsigned int next = prev + current;
        printf(", %u", next);


        prev = current;
        current = next;

        i++;
    }

    printf("\n");

    return (0);
}

