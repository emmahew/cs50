#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//get user to input text


int main(void)
{
    //get text from user
    string text = get_string("Text:");

    //find number of letters
    int number_of_letters = 0;
    for (int l = 0; l < strlen(text); l++)
    {
        if (text[l] >= 'A' && text[l] <= 'z')
        {
            number_of_letters ++;
        }
    }

    //find number of words
    int number_of_words = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            number_of_words ++;
        }

    }
    

    //find number of sentences
    int sentences = 0;
    for (int j = 0; j < strlen(text); j++)
    {
        if (text[j] == '.' || text[j] == '?' || text[j] == '!')
        {
            sentences ++;
        }
    }
    

    //calculation
    //finding L and S
    float L = (100 * ((float)number_of_letters / (float)number_of_words));

    float S = (100 * ((float)sentences / (float)number_of_words));

    //put L and S into formula
    float gradef = (((L * 0.0588) - (0.296 *S))- 15.8 );

    //round the grade
    int grade = round(gradef);

    //print the correct grade band
    if ( grade >16 )
    {
        printf("grade 16+ \n");
    }
    else if (grade < 1)
    {
        printf("before grade 1 \n");
    }
    else
    {
        printf("grade %i \n", grade);
    }

}


