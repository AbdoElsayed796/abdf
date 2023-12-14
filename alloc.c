#include <stdio.h>
#define RESET "\x1b[0m"
#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define GMAENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"
int main()
{
    char Game[9][9] = {' '};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i % 4 == 0 && j % 4 == 0)
            {
                Game[i][j] = '.';
            }
            else
                Game[i][j] = ' ';
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i % 4 == 0 && j % 4 == 0 && j < 8)
            {
                for (int k = 1; k <= 3; k++)
                {
                    Game[i][j + k] = '-';
                    Game[j + k][i] = '|';
                }
            }
        }
    }

    char a = 'A';
    // Place '1' in the middle of the distance between adjacent '*'
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i % 4 == 0 && j % 4 == 0)
            {
                // Check if there is room to place '1' between adjacent '*'
                if (i + 4 < 9)
                {
                    Game[i + 4 / 2][j] = a;
                    if (a == 'Z')
                        a = 'a';
                    else
                        a++;
                }
                if (j + 4 < 9)
                {
                    Game[i][j + 4 / 2] = a;
                    if (a == 'Z')
                        a = 'a';
                    else
                        a++;
                }
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            Game[i][j] = '#';
        }
    }

    printf("\n\n\n\n");
    printf(BLUE "################################################################################\n");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (Game[i][j] == '.' || Game[i][j] == ' ')
                printf(RED "%c ", Game[i][j]);
            else if (Game[i][j] == '|' || Game[i][j] == '-')
                printf(GMAENTA "%c ", Game[i][j]);
            else if(Game[i][j] == '#')
                printf(GREEN "%c ", Game[i][j]);
                else
                printf(RED "%c ", Game[i][j]);
        }
        printf("\n");
    }
    printf(BLUE "################################################################################");
    printf("\n\n\n\n");

    return 0;
}