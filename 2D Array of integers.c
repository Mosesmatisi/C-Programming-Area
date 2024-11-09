//2D array of integers
#include <stdio.h>

int main() {
    int i,j;
	int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element at arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}