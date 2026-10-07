#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

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

        // Validate marks
        do {
            printf("Marks (0-100): ");
            scanf("%f", &marks);

            if (marks < 0 || marks > 100) {
                printf("Invalid marks! Please enter a value between 0 and 100.\n");
            }

        } while (marks < 0 || marks > 100);

        // Convert marks into a range for switch-case
        int markRange = (int)marks / 10;

        // Determine grade using switch-case
        switch (markRange) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
                break;
        }

        // Display Student Information
        printf("\n====================================\n");
        printf("        STUDENT INFORMATION         \n");
        printf("====================================\n");
        printf("Registration No: %s\n", regNum);
        printf("Name:            %s\n", name);
        printf("Marks:           %.2f\n", marks);
        printf("Grade:           %c\n", grade);

        // Determine Pass / Fail status
        if (marks >= 40) {
            printf("Status:          PASSED\n");
        } else {
            printf("Status:          FAILED\n");
        }

        printf("====================================\n");
    }

    return 0;
}
