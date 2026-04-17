//Assignment 21
/*Write a C program to copy contents of one file to another using File handling*/
#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    char sourceFile[100], destFile[100];
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);
    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if(source == NULL) {
        printf("Cannot open source file!\n");
        return 0;
    }
    // Open destination file in write mode
    destination = fopen(destFile, "w");
    if(destination == NULL) {
        printf("Cannot open destination file!\n");
        fclose(source);
        return 0;
    }
    // Copy content character by character
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully!\n");
    // Close files
    fclose(source);
    fclose(destination);
    return 0;
}
