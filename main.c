/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // String manipulation example
    char text[] = "hello world";
    
    // Capitalize the first letter
    text[0] = toupper(text[0]);
    printf("Capitalized: %s\n", text);

    // Substring (first 5 characters)
    char substring[6]; // We need to reserve space for 5 characters + null-terminator
    strncpy(substring, text, 5);
    substring[5] = '\0'; // Ensure the substring is null-terminated
    printf("Substring: %s\n", substring);

    // Find and replace "world" with "C++"
    char *pos = strstr(text, "world");
    if (pos != NULL) {
        strncpy(pos, "C++", 3);  // Replace "world" with "C++"
    }
    printf("Replaced: %s\n", text);

    // Array manipulation example
    int numbers[10] = {1, 2, 3, 4, 5};
    int size = 5;
    
    // Add 6 to the array
    numbers[size] = 6;
    size++;

    printf("Array after addition: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // File manipulation example
    FILE *outfile = fopen("example.txt", "w");
    if (outfile != NULL) {
        fputs("Hello, world!\n", outfile);
        fputs("This is a file manipulation example.\n", outfile);
        fclose(outfile);
    } else {
        printf("Error opening file for writing\n");
    }

    // Reading from the file
    FILE *infile = fopen("example.txt", "r");
    if (infile != NULL) {
        char line[256]; // Buffer to read each line
        printf("\nReading from file:\n");
        while (fgets(line, sizeof(line), infile)) {
            printf("%s", line);  // Output the line read from file
        }
        fclose(infile);
    } else {
        printf("Error opening file for reading\n");
    }

    return 0;
}
