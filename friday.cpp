/*
USER: exodiak1
TASK: friday
LANG: C++
*/


#include <cstdio>
using namespace std;
bool isLeap(int year){
if((year % 4 == 0 && year % 100 != 0) || year%400 == 0){
	return true;
}else{

	return false;
}
}

int main(){

int n = 0, day = 13, i, y = 1900;
freopen("friday.in", "r", stdin);
freopen("friday.out", "w", stdout);

int year[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int lyear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int sum[7] = {0};

scanf("%d", &n);
for(i = 0; i < n; i++){
	for(int month = 0; month < 12; month++){
		sum[day%7]++;
		if(isLeap(y)){
			day += lyear[month];
		}else{
			day +=year[month];
		}
		
	}
	y++;
}

printf("%d ", sum[6]);
for(i = 0; i < 5; i++){
	printf("%d ", sum[i]);
}
printf("%d\n", sum[5]);
return 0;
}
