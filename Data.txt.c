#include <stdio.h>
#include <stdlib.h>
int main () {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char sentence[100];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    
    return 0;
}