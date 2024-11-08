//For Loop to calculate and print cubes of numbers
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Number is : %d and cube of %d is : %d\n", i, i, i * i * i);
    }

    return 0;
}
