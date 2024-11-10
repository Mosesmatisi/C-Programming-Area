// Program that reads the name and marks of 5 students
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file; 
    char names[50];
    int marks;

    file = fopen("C:\\Users\\Administrator\\Documents\\Projects.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    for (int i=0; i < 5; i++){
		printf("Enter the name of the student: \n");
    fgets(names, sizeof(names), stdin);

    printf("Enter the marks of the student: \n");
    scanf("%d", &marks);
    getchar();

    fprintf(file, "Name: %sMarks: %d\n", names, marks);
	}
    fclose(file);
    

    return 0;
}