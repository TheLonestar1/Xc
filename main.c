#include"jiznn.h"



int main(){

    struct murv mur[20];
    mur[0].klass = 9;//����� �������� 9 , � ���� ��� ��������� 0-�� ��������
    mur[0].energy = 10000;
    int index = 0;
    int table[16][16];
    for( int i = 0; i < 16; i++) {
		for(int j = 0; j < 16; j++) {
		    table[i][j] = rand()%3;
		}
    }
    table[15][15] = mur[0].klass;
    table[15][14] = 2;
    table[15][13] = 2;
    while(1){
	system("CLS");
	for(int i = 0; i < 16; i++){
	    for(int j = 0; j < 16; j++){
			switch(table[i][j]){
			    case 0:
					printf(" . ");
					break;
			    case 8:
					printf(" O ");// ����� �������� 8, � ��� ����� ���������� �� ���� �������� �������� �������� �������� 20(���� �� ������ 20 ����� �������)
					break;
			   	 case 2:
					printf(" | ");
					break;
		    	case 3:
					printf(" x ");
					break;
				case 1:
					printf(" _ ");
					break;
		    	case 9:
					printf(" Q ");
					break;
			}	
	    }
	    printf("\n");
	}
	printf("%d" , index);
	for( int i = 0; i < 16; i++) {
		for(int j = 0; j < 16; j++) {
		    hod(table,i,j,&index,mur);
		}
    }
    system("pause");
    }

}
