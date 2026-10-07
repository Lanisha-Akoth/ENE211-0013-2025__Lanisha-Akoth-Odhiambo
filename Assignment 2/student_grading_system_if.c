#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStudents;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        char regNum[50];
        char name[50];
        float marks;
        char grade;

        printf("\n--- Enter Details for Student %d ---\n", i + 1);

        printf("Registration No: ");
        scanf("%s", regNum);

        // Clear the newline left by scanf
        getchar();

        printf("Name: ");
        fgets(name, sizeof(name), stdin);

        // Remove the newline from the name
        for (int j = 0; name[j] != '\0'; j++) {
            if (name[j] == '\n') {
                name[j] = '\0';
                break;
            }
        }

        // Ask for marks and validate them
        do {
            printf("Marks (0-100): ");
            scanf("%f", &marks);

            if (marks < 0 || marks > 100) {
                printf("Invalid marks! Please enter a value between 0 and 100.\n");
            }

        } while (marks < 0 || marks > 100);

        // Determine Grade using if-else if-else
        if (marks >= 70) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display Student Information
        printf("\n====================================\n");
        printf("        STUDENT INFORMATION         \n");
        printf("====================================\n");
        printf("Registration No: %s\n", regNum);
        printf("Name:            %s\n", name);
        printf("Marks:           %.2f\n", marks);
        printf("Grade:           %c\n", grade);

        // Pass / Fail status
        if (marks >= 40) {
            printf("Status:          PASSED\n");
        } else {
            printf("Status:          FAILED\n");
        }

        printf("====================================\n");
    }

    return 0;
}
