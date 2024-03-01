#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)// create a function to generate random no.
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2) //function for determining the scores of computer and player.
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }

    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp, n, play1, play2;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'}; // r = rock, p = paper, s = scssior
    printf("\n\n\t----------------------------------\n");
    printf("\tWelcome to the Rock Paper Scissors\n");
    printf("\t----------------------------------\n\n");

    printf("\n\tHow many times you want to play the Game: "); //determin the no. of time player want to play
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // using for loop for number of times the game will be played by the player using player input.
    {
        // Take player input
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n"); 
        printf("\t\t Player's turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("\n\t\t -----------------\n");
        printf("\t\t| You choose: %c   |\n", playerChar); //display player input
        printf("\t\t -----------------\n\n");

        // computer generate
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        printf("\t\t Computer's turn\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("\t\t --------------------\n");
        printf("\t\t| Computer choose: %c |\n", compChar); // display computer generated input
        printf("\t\t --------------------\n\n");

        // computer character and increment the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
            printf("\t\tComputer Got It!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("\t\tIt's a draw. Both got 1 point!\n\n");
        }
        else
        {
            playerScore++;
            printf("\t\tYou Got It!\n\n");
        }

        printf("\n\t\t -------------\n");
        printf("\t\t| You: %d      |\n", playerScore);
        printf("\t\t| Computer: %d |\n", compScore);
        printf("\t\t -------------\n\n");

        printf("===========================================================\n\n");
    }
//final score display
    printf("\t\t -----------------\n");
    printf("\t\t|   Final Score   |\n");
    printf("\t\t -----------------\n");
    printf("\t\t|  You | Computer |\n");
    printf("\t\t|------|----------|\n");
    printf("\t\t|   %d  |    %d     |\n", playerScore, compScore);
    printf("\t\t -----------------\n\n");

    // compare score
    if (playerScore > compScore)
    {
        printf("\n\t\t -------------------\n");
        printf("\t\t| You Win the match |\n");
        printf("\t\t -------------------\n");
    }
    else if (playerScore < compScore)
    {
        printf("\n\t\t ------------------------\n");
        printf("\t\t| Computer Win the match |\n");
        printf("\t\t ------------------------\n");
    }
    else
    {
        printf("\n\t\t -------------\n");
        printf("\t\t| It's a draw |\n");
        printf("\t\t -------------\n");
    }
  //using while loop to  restart the game again
    while (1)
    {

        printf("\n\tDo you want to play again 1 for Yes or 0 for No: "); 
        scanf("%d", &play1);
        if (play1 == 1)
        {
            printf("\n\n\t----------------------------------\n");
            printf("\tWelcome to the Rock Paper Scissors\n");
            printf("\t----------------------------------\n\n");

            printf("\n\tHow many times you want to play the Game: ");
            scanf("%d", &n);

            for (int i = 0; i < n; i++)
            {
                // Take player input
                printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
                printf("\t\t Player's turn: ");
                scanf("%d", &temp);
                getchar();
                playerChar = dict[temp - 1];
                printf("\n\t\t -----------------\n");
                printf("\t\t| You choose: %c   |\n", playerChar);
                printf("\t\t -----------------\n\n");

                // computer generate
                printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
                printf("\t\t Computer's turn\n");
                temp = generateRandomNumber(3) + 1;
                compChar = dict[temp - 1];
                printf("\t\t --------------------\n");
                printf("\t\t| Computer choose: %c |\n", compChar);
                printf("\t\t --------------------\n\n");

                // computer character and increment the score
                if (greater(compChar, playerChar) == 1)
                {
                    compScore++;
                    printf("\t\tComputer Got It!\n\n");
                }
                else if (greater(compChar, playerChar) == -1)
                {
                    compScore++;
                    playerScore++;
                    printf("\t\tIt's a draw. Both got 1 point!\n\n");
                }
                else
                {
                    playerScore++;
                    printf("\t\tYou Got It!\n\n");
                }

                printf("\n\t\t -------------\n");
                printf("\t\t| You: %d      |\n", playerScore);
                printf("\t\t| Computer: %d |\n", compScore);
                printf("\t\t -------------\n\n");

                printf("===========================================================\n\n");
            }

            printf("\t\t -----------------\n");
            printf("\t\t|   Final Score   |\n");
            printf("\t\t -----------------\n");
            printf("\t\t|  You | Computer |\n");
            printf("\t\t|------|----------|\n");
            printf("\t\t|   %d  |    %d     |\n", playerScore, compScore);
            printf("\t\t -----------------\n\n");

            // compare score
            if (playerScore > compScore)
            {
                printf("\n\t\t -------------------\n");
                printf("\t\t| You Win the match |\n");
                printf("\t\t -------------------\n");
            }
            else if (playerScore < compScore)
            {
                printf("\n\t\t ------------------------\n");
                printf("\t\t| Computer Win the match |\n");
                printf("\t\t ------------------------\n");
            }
            else
            {
                printf("\n\t\t -------------\n");
                printf("\t\t| It's a draw |\n");
                printf("\t\t -------------\n");
            }
        }
        else if (play1 == 0)
        {
            printf("\n\t\t ---------------\n");
            printf("\t\t| Thank You...! |\n");
            printf("\t\t ---------------\n");
            break;
        }
    }
    return 0;
}
