#include <stdio.h>
#include <stdlib.h>

class Point2D{
public:
	int x,y;
};

class Object{
protected:
	Point2D position;
public:
	void updatePosition(Point2D p){
		position = p;
	}

	bool collision(Object &b){
		return position.x == b.position.x && position.y == b.position.y;
	}

	Point2D getPosition(){
		return position;
	}
};

class Sprite{
private:
	char symbol;
public:
	Sprite(char s){
		symbol = s;
	}
	char getSymbol(){
		return symbol;
	}
};



class Coin: public Object, public Sprite{
public:
	Coin(): Sprite('C'){

	}
};




class Movable: public Object{
public:
	Point2D moveRight(){
		Point2D p(position);
		p.y = position.y + 1;
		return p;
	}

	Point2D moveLeft(){
		Point2D p(position);
		p.y = position.y - 1;
		return p;
	}

	Point2D moveUp(){
		Point2D p(position);
		p.x = position.x - 1;
		return p;
	}

	Point2D moveDown(){
		Point2D p(position);
		p.x = position.x + 1;
		return p;
	}
};

class Enemy: public Movable, public Sprite{
public:
	Enemy(): Sprite('E'){

	}

	Point2D move(){
		switch(rand()%5){
			case(0):
				return moveRight();
			break;
			case(1):
				return moveLeft();
			break;
			case(2):
				return moveUp();
			break;
			case(3):
				return moveDown();
			break;
			default:
				return position;
			break;
		}
	}
};


class Player: public Movable, public Sprite{
public:
	Player(): Sprite('P'){

	}

	Point2D move(){
		char op;
		scanf("%c", &op);

		switch(op){
			case('d'):
				return moveRight();
			break;
			case('a'):
				return moveLeft();
			break;
			case('w'):
				return moveUp();
			break;
			case('s'):
				return moveDown();
			break;
			default:
				return position;
			break;
		}
	}
};

class Game{
private:
	int numCoins;
	int numGrabbedCoins;
	bool grabbedCoins[100];
	Coin coins[100];
	Enemy enemies[4];
	Player player;
	char board[100][100];
	char boardToDraw[100][100];
	int w, h;
	bool killed;

	bool valid (Point2D p){
		return p.x >=0 && p.x < h && p.y >= 0 && p.y < w && board[p.x][p.y] != '#';
	}

	void clearBoard(){
		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				boardToDraw[i][j] = board[i][j];
			}		
		}
	}

public:
	void calculateFrame(){
		Point2D newP;

		newP = player.move();
		if(valid(newP)){
			player.updatePosition(newP);
		}

		for(int i=0;i<numCoins;++i){
			if(!grabbedCoins[i] && coins[i].collision(player)){
				grabbedCoins[i] = true;
				numGrabbedCoins++;
			}
		}

		for(int i=0;i<4;++i){
			if(enemies[i].collision(player)){
				killed = true;
			}
		}

		if(!killed){
			for(int i=0;i<4;++i){
				newP = enemies[i].move();
				if(valid(newP)){
					enemies[i].updatePosition(newP);
				}
			}
		}
	}

	void readGame(){
		numCoins = 0;
		killed = false;
		numGrabbedCoins = 0;
		Point2D p;
		int ene = 0;

		FILE *f;
		f = fopen("level.txt","r");

		fscanf(f, "%d %d\n", &w, &h);

		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				char val;
				fscanf(f, "%c", &val);
				switch(val){
					case('E'):
						p.y = j;
						p.x = i;
						enemies[ene].updatePosition(p);
						ene++;
						val = '.';
					break;
					case('P'):
						p.y = j;
						p.x = i;
						player.updatePosition(p);
						val = '.';
					break;
					case('C'):
						p.y = j;
						p.x = i;
						coins[numCoins].updatePosition(p);
						numCoins++;
						val = '.';
					break;
				}
				board[i][j] = val;
			}		
			fscanf(f, "\n");	
		}
	
		for(int i=0;i<numCoins;++i){
			grabbedCoins[i] = false;
		}
	}

	bool over(){
		return numCoins == numGrabbedCoins || killed;
	}

	void fillBoard(){
		clearBoard();

		Point2D p;

		for(int i=0;i<numCoins;++i){
			if(!grabbedCoins[i]){
				p = coins[i].getPosition();
				boardToDraw[p.x][p.y] = coins[i].getSymbol();
			}
		}

		for(int i=0;i<4;++i){
			p = enemies[i].getPosition();
			boardToDraw[p.x][p.y] = enemies[i].getSymbol();
		}

		p = player.getPosition();
		boardToDraw[p.x][p.y] = player.getSymbol();
	}

	void draw(){
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");

		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				printf("%c", boardToDraw[i][j]);
			}		
			printf("\n");
		}
	}

	bool playerLost(){
	 	return killed;
	}
};

int main(){
	Game game;

	game.readGame();

	while(!game.over()){
		game.fillBoard();
		game.draw();
		game.calculateFrame();
	}

	if(game.playerLost()){
		printf("You Lost\n");	
	}else{
		printf("You Win\n");	
	}
	
	return 0;
}