#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int mysteryNumber=rand()%10;
    int number;
    printf("Welcome to Guessing mysterious number. Hint is the number is between 1 to 10. You will have 3 chances.\n");
    for(int i=0;i<=6;i++){
        printf("Guess the number:");
        scanf("%d",&number);
        if(number==mysteryNumber){
            printf("\nCorrect!!!\a\nThe End");
            break;
        }else if(i==2) {
            printf("You failed. Better luck next time");
            break;
        }else if(number<mysteryNumber){
            printf("\nIt it higher.Try again\n");
        }else if(number>mysteryNumber){
            printf("\nIt is lesser.Try again\n");
        }
    }
    return 0;
}
