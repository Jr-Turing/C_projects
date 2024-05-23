// Here is a simple quiz game program in C:
#include <stdio.h>

int main()
{
    int i;
    int score = 0;
    char answer;

    printf(" Welcome to the Game\n\n");
    printf("> Press 5 to start the game\n");
    printf("> Press 0 to quit the game\n");
    scanf("%d", &i);

    if (i == 5)
    {
        printf("The game has started\n\n");
    }
    else if (i == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if (i == 5)
    {
        printf("Ques1: Who was the Creator of Programming Language C++?\n");
        printf("A) Bjarne Stroustrup\n");
        printf("B) Dennis Ritchie\n");
        printf("C) James Gosling\n");
        printf("D) John McCarthy\n");

        printf("Enter Your Answer:");
        scanf(" %c", &answer);

        if (answer == 'A' || answer == 'a')
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect!\n");
            printf("The correct answer is : A) Bharne Stroustrup\n\n");
        }

        printf("Ques2: Who is Known as the 'Father Of AI'?\n");
        printf("A) Elon Musk\n");
        printf("B) Sam Altman\n");
        printf("C) John McCarthy\n");
        printf("D) Mark Zuckerberg\n");

        printf("Enter Your Answer:");
        scanf(" %c", &answer);

        if (answer == 'C' || answer == 'c')
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. The correct answer is : C) John McCarthy.\n");
        }

        printf("Ques3: Who was the Creator of Programming Language 'C'?\n");
        printf("A) John Turing\n");
        printf("B) Dennis Ritchie\n");
        printf("C) Alan Turing\n");
        printf("D) Jensen Huang\n");

        printf("Enter Your Answer:");
        scanf(" %c", &answer);

        if (answer == 'B' || answer == 'b')
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. The correct answer is : B) Dennis Ritchie.\n");
        }

        printf("Ques4: Who was the Creator of Programming Language 'JAVA'?\n");
        printf("A) Elon Musk\n");
        printf("B) Jack Altman\n");
        printf("C) James Gosling\n");
        printf("D) Dennis Ritchie\n");

        printf("Enter Your Answer:");
        scanf(" %c", &answer);

        if (answer == 'C' || answer == 'c')
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. The correct answer is : C) James Gosling.\n");
        }

        printf("Ques5: Who was the Creator of Programming Language 'Python'?\n");
        printf("A) Guido van Rossum\n");
        printf("B) Sam Altman\n");
        printf("C) John Turing\n");
        printf("D) Dennis Ritchie\n");

        printf("Enter Your Answer:");
        scanf(" %c", &answer);

        if (answer == 'A' || answer == 'a')
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. The correct answer is : A) Guido van Rossum.\n");
        }
    }
    printf("Quiz completed! You scored %d out of 5.\n", score);
    return 0;
}