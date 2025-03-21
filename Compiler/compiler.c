#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Create and clear files
    FILE *file_errors = fopen("errors.txt", "w");
    FILE *file_quad = fopen("quadruples.txt", "w");
    FILE *file_symtable = fopen("SymbolTable.txt", "w");
    
    if (!file_errors || !file_quad || !file_symtable) {
        printf("Error opening files.\n");
        return 1;
    }
    
    fclose(file_errors);
    fclose(file_quad);
    fclose(file_symtable);
    
    // Get input file name from the user
    char filename[256];
    printf("Enter the input file name: ");
    scanf("%255s", filename);
    
    // Read the input file content
    FILE *input_file = fopen(filename, "r");
    if (!input_file) {
        printf("Error opening input file.\n");
        return 1;
    }
    
    fseek(input_file, 0, SEEK_END);
    long length = ftell(input_file);
    fseek(input_file, 0, SEEK_SET);
    
    char *inputCode = (char *)malloc(length + 1);
    if (!inputCode) {
        printf("Memory allocation failed.\n");
        fclose(input_file);
        return 1;
    }
    
    fread(inputCode, 1, length, input_file);
    inputCode[length] = '\0';
    fclose(input_file);
    
    // Execute external program with inputCode as stdin
    FILE *process = popen("./a.out", "w");
    if (!process) {
        printf("Error executing a.out\n");
        free(inputCode);
        return 1;
    }
    
    fwrite(inputCode, 1, length, process);
    pclose(process);
    free(inputCode);
    
    // Read and print errors from errors.txt
    file_errors = fopen("errors.txt", "r");
    if (file_errors) {
        char errorMessage[1024];
        while (fgets(errorMessage, sizeof(errorMessage), file_errors)) {
            printf("%s", errorMessage);
        }
        fclose(file_errors);
    } else {
        printf("Error opening errors.txt\n");
    }
    
    return 0;
}
