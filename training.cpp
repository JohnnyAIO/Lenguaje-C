/*
ID: exodiak1
PROG: ride
LANG: C++
*/

#include <cstdio>
using namespace std;

int main(){
char in;
int comet = 1, group = 1;
freopen("ride.in", "r", stdin);
freopen("ride.out", "w", stdout);

while(scanf("%c", &in)){
	if(in != '\n'){
	 group *= (in-64);
	}else{
	 break;
	}
}

while(scanf("%c", &in)){
	if(in != '\n'){
	comet *= (in-64);
	}else{
	break;
	}
}

if(comet % 47 == group % 47){
	printf("GO\n");
}else{
	printf("STAY\n");
}



return 0;
}
