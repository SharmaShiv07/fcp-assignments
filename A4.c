#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent student data
struct Student {
    char name[50];
    int rollNo;
    char gender;
};

// Function prototypes
void writeStudentDataToFile();
void appendFileDataWithChecksum();
void writeStructDataToFile();
void appendTableOfNumbers();

int main() {
    writeStudentDataToFile();
    appendFileDataWithChecksum();
    writeStructDataToFile();
    appendTableOfNumbers();

    return 0;
}

// Function to write student data to a text file
void writeStudentDataToFile() {
    FILE *file = fopen("student_data.txt", "w");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "Student Name\tRoll No.\tGender\n");
    fprintf(file, "John Doe\t101\tM\n");
    fprintf(file, "Jane Smith\t102\tF\n");

    fclose(file);
    printf("Student data written to file successfully.\n");
}

// Function to append file data with checksum
void appendFileDataWithChecksum() {
    FILE *file = fopen("student_data.txt", "a");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // One line about yourself
    fprintf(file, "\nOne line about myself: I enjoy programming and learning new things.\n");

    // Calculate and append checksum
    fseek(file, 0, SEEK_SET);
    int checksum = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        checksum += ch;
    }
    fprintf(file, "\nChecksum: %d\n", checksum);

    fclose(file);
    printf("File data appended with checksum successfully.\n");
}

// Function to write struct data to a text file
void writeStructDataToFile() {
    FILE *file = fopen("student_data.txt", "a");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Struct data
    struct Student myData = {"Your Name", 103, 'M'};
    
    fprintf(file, "\n\nStruct Data:\n");
    fprintf(file, "Student Name\tRoll No.\tGender\n");