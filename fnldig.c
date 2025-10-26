#include <stdio.h>

int main() {
    int num, first, last, temp;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    
    last = num % 10;


    while (num >= 10) {
        num = num / 10;
    }
    first = num;

    
    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);

    return 0;
}
