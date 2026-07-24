#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    // Create and open the file in write mode
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter text (Press Enter to finish):\n");

    // Write characters to the file until Enter is pressed
    while ((ch = getchar()) != '\n') {
        fputc(ch, fp);
    }

    fclose(fp);

    // Open the file in read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Count characters in the file
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Number of characters in the file = %d\n", count);

    return 0;
}