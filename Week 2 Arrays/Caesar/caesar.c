#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check if the command-line argument count is not equal to 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if the key contains non-numeric characters
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from string to an integer
    int k = atoi(argv[1]);

    // Get plaintext from the user
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // Iterate through each character in the plaintext
    for (int j = 0; j < strlen(plaintext); j++)
    {
        // Encrypt uppercase letters
        if (isupper(plaintext[j]))
        {
            printf("%c", 'A' + (plaintext[j] - 'A' + k) % 26);
        }
        // Encrypt lowercase letters
        else if (islower(plaintext[j]))
        {
            printf("%c", 'a' + (plaintext[j] - 'a' + k) % 26);
        }
        // Print non-alphabetic characters unchanged
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
}
