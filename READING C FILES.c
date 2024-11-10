//READING C FILES
#include <stdio.h>
#include <stdlib.h>

void readFromFile() {
    FILE *fptr;
    char sentence[100];

    fptr = fopen("C:\\Users\\Administrator\\Documents\\Projects.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    
    printf("Content of data.txt:\n");
    while (fgets(sentence, sizeof(sentence), fptr) != NULL) {
        printf("%s", sentence);
    }
    fclose(fptr);
}

int main() {
    readFromFile();
    return 0;
}