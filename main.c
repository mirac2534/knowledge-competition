#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu()
{
    int option;
    printf("\n1-> General Culture");
    printf("\n2-> Technology");
    printf("\n3-> History");
    printf("\n4-> Exit");
    printf("\nChoose an option: ");
    scanf("%d", &option);
    return option;
}

int knowledge_competition_general_culture()
{
    int score = 0;
    char chic;
    printf("Firstly, you can choose only one option\n");

    printf("1. question:\n");
    printf("Where is the capital of Turkey?\n");
    printf("A. Istanbul  B. Adana  C. Ankara  D. Erzurum\n");
    scanf(" %c", &chic);
    if (chic == 'C') // if you choose C, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not C, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is Ankara\n\n");// if your answer is wrong, this is true
    }

    printf("2. question:\n");
    printf("Which is the largest ocean in the world?\n");
    printf("A. Atlantic  B. Pacific  C. Indian  D. Arctic\n");
    scanf(" %c", &chic);
    if (chic == 'B') // if you choose B, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not B, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is Pacific Ocean\n\n");// if your answer is wrong, this is true
    }

    return score;
}

int knowledge_competition_technology()
{
    int score = 0;
    char chic;
    printf("Firstly, you can choose only one option\n");

    printf("1. question:\n");
    printf("Which year was the first artificial intelligence used?\n");
    printf("A. 1951  B. 1957  C. 1975  D. 1983\n");
    scanf(" %c", &chic);
    if (chic == 'A') // if you choose A, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not A, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is 1951\n\n");// if your answer is wrong, this is true
    }

    printf("2. question:\n");
    printf("When was the first laptop invented?\n");
    printf("A. 1955  B. 1968  C. 1979  D. 1983\n");
    scanf(" %c", &chic);
    if (chic == 'C') // if you choose C, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not C, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is 1979\n\n");// if your answer is wrong, this is true
    }

    return score;
}

int knowledge_competition_history()
{
    int score = 0;
    char chic;
    printf("Firstly, you can choose only one option\n");

    printf("1. question:\n");
    printf("When did the first world war start?\n");
    printf("A. 1913  B. 1914  C. 1915  D. 1916\n");
    scanf(" %c", &chic);
    if (chic == 'B') // if you choose B, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not B, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is 1914\n\n");// if your answer is wrong, this is true
    }

    printf("2. question:\n");
    printf("which year was Istanbul conquered?\n");
    printf("A. 1452  B. 1457  C. 1454  D. 1453\n");
    scanf(" %c", &chic);
    if (chic == 'D') // if you choose D, you earn 25 points
    {
        printf("Correct answer\n\n");
        score += 25;
    }
    else // if your answer is not D, this is wrong answer
    {
        printf("Wrong answer\n");
        printf("Right answer is 1453\n\n");// if your answer is wrong, this is true
    }

    return score;
}

int main()
{
    int option;
    int total_score = 0;// score is zero at the head of competition
    printf("Welcome to the knowledge competition\n");
    printf("-----------------------------------\n");

    do
    {
        option = menu();
        switch(option)
        {
            case 1:
                total_score += knowledge_competition_general_culture();// for general culture
                printf("your score is %d",total_score);
                return 1;// closes after the question is finished
                break;
            case 2:
                total_score += knowledge_competition_technology();// for technology
                printf("your score is %d",total_score);
                return 1;//closes after the question is finished
                break;
            case 3:
                total_score += knowledge_competition_history();// for history
                printf("your score is %d",total_score);
                return 1;// closes after the question is finished
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Incorrect option...\n");
                break;
        }
    } while(option != 4);

    return 0;
}
