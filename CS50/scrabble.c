#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}
int compute_score(string question);
int main(void)
{
    string question1 = get_string("Player 1: ");
    string question2 = get_string("Player 2: ");

    int score1 = compute_score(question1)
    int score2 = compute_score(question2)

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}
int compute_score(string question)
{
    int score = 0;

    for (int i = 0, len = strlen(question); i < len; i++)
    {
        if (isupper(question[i]))
        {
            score += POINTS[question[i] - 'A'];
        }
        else if (islower(question[i]))
        {
            score += POINTS[question[i] - 'a'];
        }
    }

    return score;
}
