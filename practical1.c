#include <stdio.h>

void main() {
    int n, x, i, count = 0, firstPosition = -1, str[100];

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }

    printf("Enter number to find: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (str[i] == x) {
            count++;
            if (firstPosition == -1) {
                firstPosition = i;
            }
        }
    }

    printf("Number of occurrences of %d is: %d\n", x, count);

    
    if (firstPosition != -1) {
        printf("First occurrence of %d is at index: %d\n", x, firstPosition);
    } else {
        printf("%d was not found in the array.\n", x);
    }
}