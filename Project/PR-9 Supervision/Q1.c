#include <stdio.h>

int main() {
    int start = 50;
    int end = 70;
    FILE *evenFile = fopen("even_numbers.txt", "w");
    FILE *oddFile = fopen("odd_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error: Unable to create files.\n");
        return 1;
    }
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d ", i); 
        } else {
            fprintf(oddFile, "%d ", i);  
        }
    }
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers written to files successfully.\n");
}