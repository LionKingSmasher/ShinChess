void error_message(char* message){ //에러 메세지
	printf("[error!]%s\n", message);
}

int change2num(char input){
	switch(input){
	case 'a':
		return 1;
	case 'b':
		return 2;
	case 'c':
		return 3;
	case 'd':
		return 4;
	case 'e':
		return 5;
	case 'f':
		return 6;
	case 'g':
		return 7;
	case 'h':
		return 8;
	}
}

void moveSYS(char (*table)[10], int x, int y, int next_x, int next_y){
	if(x>8||y>8||next_x>8||next_y>8) printf(" ");
	else{
		if(table[y-1][x-1]=='.') return;
		else {
			if(table[y-1][x-1]=='P'&&(next_y-y>2||next_y-y<-2||next_x!=x)) return; //폰의 이동 제한
			else if(table[y-1][x-1]=='N'&&(!(next_x-x==1||next_x-x==-1)||!(next_y-y==-2||next_y-y==2))) return;
			else if(table[y-1][x-1]=='B'&&(!(x-y==next_x-next_y||x+y==next_x+next_y))) return;
			else if(table[y-1][x-1]=='R'&&(!(x==next_x)&&!(next_y==y))) return;
			else {
				table[next_y-1][next_x-1] = table[y-1][x-1];
				table[y-1][x-1] = '.';
			}
		}
	}
}