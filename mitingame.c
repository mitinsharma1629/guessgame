#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int number, guessno, no_of_guess=1;
		srand(time(0));
		number=rand()%100+1;
	//printf("%d random no :\n",number);

do {
	printf("guess the number between 1 - 100 :");
	scanf("%d",&guessno);
	if(guessno>number){
		printf("enter lower no \n");
	}
   else if(guessno<number){
   	printf("enter higher no ");
   }
   else{
   	printf("you guess correct no in %d attempt",no_of_guess);
   }
   no_of_guess++;
   }while(guessno!=number);
   










return 0;
}






