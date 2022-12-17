#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>




int main()
{
    system("clear");
    int MaxRange;
    int MinRange;
    char LvH[] = "Higher or Lower";
    printf("Max Number? ");
    scanf("%d", &MaxRange);
    printf("Min Number? ");
    scanf("%d", &MinRange);
    if (MinRange == 0)
    {
        MinRange = 1;
    }
    else
    {
        MinRange = MinRange;
    }
    if (MaxRange == 0)
    {
        MaxRange = 1;
    }
    else
    {
        MaxRange = MaxRange;
    }

    
    if(MinRange >= MaxRange)
    {
        printf("Your min range can not be greater or equal to your max range...\n");
        sleep(2.5);
        system("clear");
        exit(0);
    }
    srand(time(0));
    int randomNOMBRRE = (rand() % ((MaxRange - MinRange + 1)) + MinRange);
    int PlayerGuess = 0;
    bool IsCorrect = false;
    int tries = 0;
    system("clear");
    while (IsCorrect != true)
    {
        sleep(0.1);
        tries++;
        printf("try to guess the number which is between %d and %d and is %s than %d?\n\r", MaxRange, MinRange, LvH, PlayerGuess);
        scanf("%d", &PlayerGuess);
        if (PlayerGuess > randomNOMBRRE)
        {
            
            strcpy(LvH, "Lower");

        }
        
        else if(PlayerGuess < randomNOMBRRE)
        {
            strcpy(LvH, "Higher");

        }
        else if(PlayerGuess == randomNOMBRRE)
        {
            IsCorrect = true;
            printf("You Guessed the number which was %d and took you %d tries to get it\n", randomNOMBRRE, tries);
            break;
        }

        system("clear");
    }
    system("clear");
    return 0;

}