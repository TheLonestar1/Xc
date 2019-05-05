#include"jiznn.h"

void napoln(int table[16][16]){
	int x,y;
	a:
    x = rand()%15;
    y = rand()%15;
    if(table[x][y] == 1){
    	table[x][y] = 2;
	}
	else{
		goto a;	
	}
}
void hod(int table[16][16],int x,int y,int *index,struct murv *murv){
	
	switch(table[x][y]) {
		case 8:			
			break;
		case 9:
			logic_qeen(table,index,murv);
	}
}


void logic_qeen(int table[16][16], int *index, struct murv *murv){
	if((table[15][14] == 2) && (table[15][13] == 2) ) {
		*index = *index + 1;
		printf("%d" , *index);
		table[15][13] = 1;
		murv[*index].energy = 15;
		table[15][14] = murv[*index].klass = 8;
		printf("I'am born! I dream a working! Let's start!");
	}
	if((table[14][15] == 2) && (table[13][15] == 2) ) {
		*index = *index + 1;
		table[13][15] = 1;
		murv[*index].energy = 15;
		table[14][15] = murv[*index].klass = 8;
		printf("I'am born! I dream a working! Let's start!");
	}
}
