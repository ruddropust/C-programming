#include <stdio.h>
#include <conio.h>

main()
{
int score=0;
int answer;

printf("Welcome to the C quiz\nThe quiz has 5 every basic questions Based on Historical Bangladesh.\nYou get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
printf("Press Enter to get next Question\n");
printf("Q-1) What does Bangladesh's flag look like?\n");
printf("Options Are as follows\n");
printf("[1]Blue background with yellow star in centre\n [2]Green background with red circle in centre\n [3]Red background with white circle in centre  'B'\n ");
scanf("%d", &answer);

if(answer==2)
{
printf("That's Correct!\n");
score=score+2;
}
else
{
printf("Wrong Answer\n");
score=score-1;
}

printf("{\nQ-2) What year did Bangladesh finally become independent and gain the name it has today?\n");
printf("Options Are as follows\n");
printf("[1]1947\n [2] 1971\n [2]1952\n");
scanf("%d", &answer);

if(answer==2)
{
printf("That's Correct!\n");
score=score+2;
}
else
{
printf("Wrong Answer\n");
score=score-1;
}

printf("nQ-3) What is the national flower of Bangladesh?\n");
printf("Options Are as follows\n");
printf("[1]Water lily\n [2]Rose\n [3]Tulip\n");
scanf("%d", &answer);

if(answer==2)
{
printf("That’s Correct!\n");
score=score+2;
}
else
{
printf("Wrong Answer\n");
score=score-1;
}

printf("nQ-4) What did Bangladesh become known as after its first session of Independence in 1947?\n");
printf("Options Are as follows\n");
printf("[1]East Pakistan\n[2]West Pakistan\n[3]East India\n");
scanf("%d", &answer);

if(answer==2)
{
printf("That’s Correct!\n");
score=score+2;
}
else
{
printf("Wrong Answer\n");
score=score-1;
}

printf("\nQ-5)What is the main religion practiced in Bangladesh?\n");
printf("Options Are as follows\n");
printf("[1]Buddism\n [2]Islam\n[3]Hinduism\n");
scanf("%d", &answer);

if(answer==2)
{
printf("That's Correct!\n");
score=score+2;
}
else
{
printf("Wrong Answer\n");
score=score-1;
}

printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 10", score);

getch();

}

