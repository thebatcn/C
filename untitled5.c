#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);


int main(void) {
	int times;
	srand(time(NULL));
	printf("Enter times:");
	scanf("%d",&times);
	while(times-- > 0){
		
	
		play_game();
	}
	return 0;
}

int roll_dice(void){
	int roll1,roll2;
	
	roll1 = rand()%6+1;
	roll2 = rand()%6+1;
	printf("roll1 = %d\t\troll2 = %d\n",roll1,roll2);
	return roll1 - roll2;
}

bool play_game(void){
	if(roll_dice()>0)
		printf("You win\n");
	else
		printf("You lose\n");
}
