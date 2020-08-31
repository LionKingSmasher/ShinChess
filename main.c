#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "system.h"

#define MAX_SIZE 8

#define DEBUG 0
#if DEBUG==0
struct MOVE
{
	char move;
	char next_move;
	int move_int;
	int next_move_int;
};

char chessTable[8][10] = {
	{'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R', '1', '\n'},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '2', '\n'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '3', '\n'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '4', '\n'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '5', '\n'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '6', '\n'},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '7', '\n'},
	{'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R', '8', '\n'},
};

int main(){
	//char *input = (char*)malloc(1024);
	struct MOVE m; 
	char move;
	char next_move;
	int move_int;
	int next_move_int;
	/*
	for(int i = 0; i < 8; i++){
		printf("%s\n", chessTable[i]);
	}
	*/
	while(1){
		system("clear");
//		printf("[테스트]%d %d\n", move, move_int);
//		printf("[테스트]%d %d\n", next_move, next_move_int);
		printf("a b c d e f g h\n");
		for(int i=0; i<MAX_SIZE; i++){
			for(int j = 0; j<MAX_SIZE+1; j++){
				printf("%c ", chessTable[i][j]);
			}
			printf("\n");
		}
		printf("INPUT >> ");
		scanf("%c%d-%c%d", &m.move, &m.move_int, &m.next_move, &m.next_move_int);
		getchar();
//		scanf("%c%d-%c%d", &move, &move_int, &next_move, &next_move_int);
		moveSYS(chessTable, change2num(m.move), m.move_int, change2num(m.next_move), m.next_move_int);
//		moveSYS(chessTable, change2num(move), move_int, change2num(next_move), next_move_int);
	}
}
#elif DEBUG==1
int main(){
	char input;
	int input_2;
	while(1){
		printf("a b c d e f g h\n");
		for(int i=0; i<MAX_SIZE; i++){
			for(int j = 0; j<MAX_SIZE+1; j++){
				printf("%c ", chessTable[i][j]);
			}
			printf("\n");
		}
		getchar();
		printf("%c\n", input);
	}
}
#endif