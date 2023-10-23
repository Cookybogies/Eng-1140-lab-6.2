/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get  input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        for (int i = 0; input[i] != '\0'; i++) {
            char c = input[i];

 // Check if the character is a letter (A-Z or a-z)
          if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Convert uppercase letters to lowercase for indexing (ASCII values differ by 32)
   if (c >= 'A' && c <= 'Z') {
      c += 32;
        }

         // Increment the corresponding count in the array
     letterCount[c - 'a']++;
     }
     }
    }

    // Display the letter counts
    printf("Distribution of letters in the input:\n");
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c: %d ", letter, letterCount[letter - 'A']);
    }
    for (char letter = 'a'; letter <= 'z'; letter++) {
        printf("%c: %d ", letter, letterCount[letter - 'a']);
    }
    printf("\n");

    return 0;
}