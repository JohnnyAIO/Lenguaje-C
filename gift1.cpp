/*
ID: exodiak1
PROG : gift1
LANG: C++
*/

#include <string.h>
#include <cstdio>
using namespace std;

int NP = 0, amount = 0, num = 0;
char member[10][14];
void assign(char name[14], int amount, int money[10]){

	for(int i = 0; i < NP; i++){
		if(strcmp(name, member[i]) == 0){
			money[i] += amount;
		}
	}
}
int main(){
int i;
int imoney[10] = {0};
int fmoney[10] = {0};
char name[14];
freopen("gift1.in", "r", stdin);
freopen("gift1.out", "w", stdout);
scanf("%d", &NP);
for(i = 0; i < NP; i++){
	scanf("%14s", member[i]);
}

for(i = 0; i < NP; i++){
	scanf("%14s", name);
	scanf("%d %d", &amount, &num);

	if(num == 0){
		continue;
	}else{

		if(amount == 0){
		for(int j = 0; j < num; j++){
		scanf("%14s", name);
		}
	}else{
		assign(name, amount, imoney);
		assign(name, amount, fmoney);
		assign(name, ((amount%num)-amount), fmoney);
		for(int j = 0; j < num; j++){
		scanf("%14s", name);
		assign(name, amount/num, fmoney);
		}
	    }
	}
}

for(i = 0; i < NP; i++){
	printf("%s %d\n", member[i], fmoney[i] - imoney[i]);
}



return 0;
}

void assign(char name[14], int amount, int money[10]);
