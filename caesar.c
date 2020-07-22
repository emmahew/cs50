#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, string argv[])
{


// check the key is valid
    if (argc == 2 && isdigit(*argv[1]))
        
    {

        int k = atoi(argv[1]); // converts the key to from char to int

        string text = get_string("plaintext: "); 
        printf("ciphertext: "); 

// iterate through plain text letter by letter
        for (int i = 0, n = strlen(text) ; i < n; i++)
        {
            // check it is lowercase 
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                printf("%c", (((text[i] - 'a') + k) % 26) + 'a'); // print out lowercase with key
            } 
            else if (text[i] >= 'A' && text[i] <= 'Z')
            {
                printf("%c", (((text[i] - 'A') + k) % 26) + 'A'); // print out uppercase with key
            }

            else

            {
                printf("%c", text[i]);
            }
        }

        printf("\n");
        return 0;
    }

    else
    {
        printf("Usage: ./caesar k\n");
        return 1;

    }

}