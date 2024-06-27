#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);


int main(void) {
	int times;
	
	srand(time(NULL));
//	printf("Enter times:");
//	scanf("%d",&times);
//	while(times-- > 0){
//		
//	
//		play_game();
//	}
	play_game();
	return 0;
}

int roll_dice(void){
	int roll1,roll2,roll;
	
	roll1 = rand()%6+1;
	roll2 = rand()%6+1;
	roll = roll1 + roll2;
//	printf("roll %d\n",roll);
	return roll;
}

bool play_game(void){
	int point,rolled;
	char c;
	do{
		rolled = roll_dice();
		printf("Your rolled is %d\n",rolled);
	
		if (rolled == 7 || rolled== 11){
			printf("You win.\n");
		}
		else
			if(rolled  == 2 || rolled== 3 || rolled ==12){
				printf("You lose.\n");
			}
//		else{			
//			printf("Your point is %d\n",point = rolled);
//			while(point != (rolled=roll_dice())){
//				printf("Your rolled: %d\n",rolled);
//				if(rolled == 7){
//					printf("You lose.\n");
//					break;	
//				}
//				else{
//					printf("Your rolled: %d\n",rolled);
//					
//				}
//			}
//			printf("Your rolled: %d\n",rolled);
//			printf("You win\n");
//			
//		}
	}while((c = getchar())=='y'|| c =='Y');
}
//
