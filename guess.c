#include <stdio.h>
#include <stdlib.h>
int main()
{ 
     again:
      int choice;
     int an,bn, num1,num2,c1=100,c2=100;
      an =rand()%50;
        printf("---------------PLAYER 1---------------\n");
     printf(">> YOU CAN START GUSSEING YOUR NUMBER NOW <<.\n");
     printf("(Range: 1-50)\n");
     label1:
     printf("**Enter your number**\n");
     scanf("%d",&num1);
     if(an>num1)
     { printf("  -----------------------------------------------------------\n");
            printf("  Your number is lower than the original number.\n  GO HIGHER\n");
             printf("  -----------------------------------------------------------\n");
      c1-=5;
        goto label1;}
        else if(an<num1) {
            printf("  -----------------------------------------------------------\n");
            printf ("  Your number is higher than the original number.\n  GO LOWER\n") ;
          printf("  -----------------------------------------------------------\n");
             c1-=5;
         goto label1;}
     else{
     printf("*********************\n");
     printf(" YOU GUESSED IT ^_^ !!\n");
     printf("*********************\n");
    }
     printf("PLAYER 1 SCORE : %d\n",c1);
       printf("---------------PLAYER 2---------------\n");
      p2:
      bn =rand()%50;     
    printf(">> The number to be gussed is selected.\n>> YOU CAN START GUSSEING YOUR NUMBER NOW.\n");
     printf("(Range: 1-50)\n");
        label2:
     printf("**Enter your number**\n");
     scanf("%d",&num2);
     if(bn>num2){
        printf("  -----------------------------------------------------------\n");
        printf("  Your number is lower than the original number.\n  GO HIGHER\n");
        printf("  -----------------------------------------------------------\n");
     c2-=5;
     goto label2;}
     else if(bn<num2){
        printf("  -----------------------------------------------------------\n");
        printf ("  Your number is higher than the original number.\n  GO LOWER\n") ;
        printf("  -----------------------------------------------------------\n");
        c2-=5;
        goto label2;}
    else {
        printf("*********************\n");
        printf(" YOU GUESSED IT ^_^ !! \n");
        printf("*********************\n");
     }
     printf("PLAYER 2 SCORE : %d\n",c2);
     printf("  -----------------------------------------------------------\n");
     if(c1>c2) printf("                      >> PLAYER 1 WINS! <<\n");
    else if(c1<c2) printf("                      >> PLAYER 2 WINS! <<\n");
     else printf("                        >>DRAW<<\n");
      printf("  -----------------------------------------------------------\n");
     printf("Do you wanna  play again?\nPress 1 foR YES\nPress 0 for N0\n");
      scanf("%d", &choice);
      if(choice==1)goto again;
      else printf("THANKS FOR PLAYING:)");
      return 0;
    }

