#include <stdio.h>

int main(void) {
	
	int chees_board[8][8] = {{0}};
		
//	for(int j = 0;j<64;j++){
//		if((j%8%2 == 0)||(j/8%2==0))
//			chees_board[j/8][j%8] = 'B';
//		else
//			chees_board[j/8][j%8] = 'R';
//			
//	}
	
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			if((i+j)%2==0 )
				chees_board[i][j] = 'B';
			else
				chees_board[i][j] = 'R';
	
	for(int i = 0;i<64;i++){
		if(i % 8 ==0)
			printf("\n");
		printf("%3c",chees_board[i/8][i%8]);
	}
	
}


