#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  murv{
    int energy;
    int klass;
};

void napoln(int table[16][16]);
int logic(int table[16][16],int x, int y);
void hod(int table[16][16],int x,int y,int *index,struct murv *murv);
void logic_qeen(int table[16][16], int *index, struct murv *murv);
