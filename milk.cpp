/*
ID: exodiak1
TASK: milk2
LANG: C++
*/



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){


ofstream foat("milk2.out");
ifstream fin("milk2.in");

int n, time, startime = 1000000, maxEnd = 0;
int i,j;
fin >> n;

int store[n][2];
int timeline[1000000]= {0};

for(i = 0; i < n; i++){
	for(j = 0; j < 2; j++){
		fin >> time;
		store[i][j] = time;
		if(j == 1){
			if(time > maxEnd){
				maxEnd = time;
			}
		}else{
			if(time < startime){

				startime = time;
			}
		
		}
	}

}


for(i = 0; i < n; i++){
	for(j = store[i][0]; j <= store[i][1]-1; j++){
		timeline[j] = 1;
	}
}

bool isStart = false;
int maxM = 0, maxNom = 0, tempM = 0, tempNM = 0;

for(i = startime; i <= maxEnd; i++){
	if(timeline[i] > 0){
		isStart = true;
	}else{
		isStart = false;
	}
	if(isStart){
		tempM++;
		if(tempNM > maxNom){
			maxNom = tempNM;
		}
		tempNM = 0;
	}else{
		tempNM++;
		if(tempM > maxM){
			maxM = tempM;
		}
		tempM = 0;
	}

}

foat << maxM << " " << maxNom << endl;

return 0;
}
