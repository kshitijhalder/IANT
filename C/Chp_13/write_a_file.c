/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Writing a file
* AUTHOR: Kshitij Halder
* DATE: 21/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program writes to a file and reads from it.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    int i, mc = 100;
    char str[100];
    char *filename = "/Users/kshitijhalder/Desktop/Workstation/IANT/C/common_comments.h";
    system("clear");

    // Open file for writing
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Could not open file %s for writing\n", filename);
        return 1;
    }

    // Write to file
    for (i = 0; i < 5; i++) {
        fprintf(fp, "This is a line %d\n", i + 1);
    }
    fclose(fp);

    printf("\nFile created");

    // Open file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s for reading\n", filename);
        return 1;
    }

    printf("\nReading the created text file\n");
    printf("--------------------------------\n");

    // Read from file
    while (fgets(str, mc, fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}
/*


#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    int i, mc = 100;
    char str[100];
    char *filename = "/Users/kshitijhalder/Desktop/Workstation/IANT/C/common_comments.h";
    system("clear");

    // Open file for writing
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Could not open file %s for writing\n", filename);
        return 1;
    }

    // Write to file
    for (i = 0; i < 5; i++) {
        fprintf(fp, "This is a line %d\n", i + 1);
    }
    fclose(fp);

    printf("\nFile created");

    // Open file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s for reading\n", filename);
        return 1;
    }

    printf("\nReading the created text file\n");
    printf("--------------------------------\n");

    // Read from file
    while (fgets(str, mc, fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}

*/