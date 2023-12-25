#include <stdio.h>
int main()
{ 
     again:
      int choice;
     int ao,bo,an,bn,num1,num2,c1=100,c2=100;
     int a[4] ={9,2,11,16};
     int b[4]={4,18,5,13};
        printf("---------------PLAYER 1---------------\n");
        ch:
     printf("Choose a number between 1 to 4\n");
     scanf("%d",&ao);
     if(ao==1) an=a[0];
     else if(ao==2) an=a[1];
    else if(ao==3) an=a[2];
     else if(ao==4) an=a[3];
    else{ printf("CHOOSE AGAIN\n");
    goto ch ;}
     printf(">> The number to be gussed is selected.\n>> YOU CAN START GUSSEING YOUR NUMBER NOW.\n");
     printf("(Range: 1-20)\n");
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
        printf("Choose a number between 1 to 4\n");
        scanf("%d",&bo);
     if(bo==1) bn=b[0];
      else if(bo==2) bn=b[1];
     else if(bo==3) bn=b[2];
    else if(bo==4) bn=b[3];
     else{ printf("CHOOSE AGAIN\n");
     goto p2;}
    printf(">> The number to be gussed is selected.\n>> YOU CAN START GUSSEING YOUR NUMBER NOW.\n");
     printf("(Range: 1-20)\n");
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
     if(c1>c2) printf(">> PLAYER 1 WINS! <<\n");
    else if(c1<c2) printf(">> PLAYER 2 WINS! <<\n");
     else printf("DRAW\n");
     printf("Do you wanna  play again?\nPress 1 foR YES\nPress 0 for N0\n");
      scanf("%d", &choice);
      if(choice==1)goto again;
      else printf("THANKS FOR PLAYING:)");
      return 0;
    }


