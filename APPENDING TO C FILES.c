//appending in c files
#include <stdio.h>
#include <stdlib.h>

void appendToFile() {
    FILE *fptr;
    char sentence[150];

    fptr = fopen("C:\\Users\\Administrator\\Documents\\Projects.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }

    printf("Enter another sentence to append (up to 150 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence appended to file successfully.\n");
}

int main() {
    appendToFile();
    return 0;
}
