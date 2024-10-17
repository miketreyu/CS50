#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    // Compute the Coleman-Liau index
    float L = (float) letters / (float) words * 100;
    float S = sentences / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);


    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }

        else if (text[i] == ' ')
        {
            words++;
        }

        else if (text[i] == '.' || text [i] == '?' || text [i] == '!')
        {
            sentences++;
        }


    }

    if (index < 1)
    {
        printf("Before Grade 1");
    }

    else if (index > 16)
    {
        printf("Grade 16");
    }

    else
    {
        printf("Grade %i", index)
    }
}
