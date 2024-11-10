//Do while loop to calculate and print cubes of numbers
#include <stdio.h>

int main() {
    int i = 1, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    do {
        printf("Number is : %d and cube of %d is : %d\n", i, i, i * i * i);
        i++;
    } while (i <= n);

    return 0;
}