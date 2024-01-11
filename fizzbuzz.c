/*

FizzBuzz implementation in C.

*/

#include <stdio.h>

int main() {

    printf("Starting FizzBuzz...\n");

    int start;
    int end;

    printf("Enter first number: ");
    scanf("%d", &start);

    printf("Enter last number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0)  {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    printf("Done!\n");

    return 0;
}