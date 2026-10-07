#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin;
    int correctPIN = 1234;
    int attempts = 3;
    int temp;
    int count;
    int choice;

    while (attempts > 0)
    {
        printf("\nEnter your PIN: ");
        scanf("%d", &pin);

        /* Count the number of digits */
        temp = pin;
        count = 0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        /* Validate PIN length */
        if (count < 4)
        {
            printf("PIN is too short (must be 4 digits)\n");
            continue;
        }
        else if (count > 4)
        {
            printf("PIN is too long (must be 4 digits)\n");
            continue;
        }
        else
        {
            printf("PIN is exactly 4 digits\n");
        }

        /* Check whether PIN is correct */
        if (pin == correctPIN)
        {
            printf("\nAccess granted!\n");

            printf("\n--- Door Lock Menu ---\n");
            printf("1. Access granted! Door unlocked\n");
            printf("2. Change username (feature coming soon)\n");
            printf("3. Change PIN (feature coming soon)\n");
            printf("4. Exiting system.\n");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Access granted! Door unlocked\n");
                    break;

                case 2:
                    printf("Change username (feature coming soon)\n");
                    break;

                case 3:
                    printf("Change PIN (feature coming soon)\n");
                    break;

                case 4:
                    printf("Exiting system.\n");
                    break;

                default:
                    printf("Invalid option! Please try again.\n");
            }

            break;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }

    /* Lockout after 3 incorrect attempts */
    if (attempts == 0)
    {
        printf("\nSystem locked! Wait for 5 seconds...\n");

        for (int i = 5; i >= 1; i--)
        {
            printf("%d...\n", i);
        }

        printf("You can try again now.\n");
    }

    return 0;
}
