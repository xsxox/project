#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Output(char player,char computer);
void Score(int p,int c);

int main(void)
{
    srand((unsigned)time(NULL));
    int player_win=0;
    int computer_win=0;
    char player_choice;
    char system_choice[3]={'r','p','s'};
    while(1)
    {
        printf("Input your choice.(r,p,s)\n");
        scanf(" %c",&player_choice);
        if(player_choice=='q')
        {
            printf("Game Over!\n");
            printf("Thank you for your playing!\n\n\n");
            break;
        }

        if(player_choice=='t')
        {
            Score(player_win,computer_win);
            continue;
        }

        if(player_choice!='r'&&player_choice!='p'&&player_choice!='s'&&player_choice!='q'&&player_choice!='t')
        {
            printf("Invalid argument!");
            continue;
        }

        int index=rand()%3;
        char computer_choice=system_choice[index];
        Output(player_choice, computer_choice);

        if(player_choice==computer_choice)
        {
            printf("Draw!\n\n\n");
        }
        else if ((player_choice == 'r' && computer_choice == 's') || 
                   (player_choice == 'p' && computer_choice == 'r') || 
                   (player_choice == 's' && computer_choice == 'p'))
        {
            printf("You win!\n\n\n");
            player_win++;
        } 
        else 
        {
            printf("You lose\n\n\n");
            computer_win++;
        }
    }
    return 0;
}

void Output(char player,char computer)
{
    printf("You: %c\n",player);
    printf("Computer: %c\n",computer);
}

void Score(int p,int c)
{
    printf("You %d - %d Computer\n\n\n",p,c);
}