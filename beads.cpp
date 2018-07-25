/*
ID: exodiak1
TASK: beads
LANG: C++
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string process(string st, int n){

	string str = "";
	str += st.substr(n);
	if(n != 0){
		str += st.substr(0,n);
	}
	return str;
}

int count(string str){

	int num = 0;
	char ch;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == 'w'){
			num++;
		}else{
			ch = str[i];
			for(int j = i; j < str.length(); j++){
				if(str[j] == ch || str[j] == 'w'){
					num++;
				}else{
					break;
				}
			}

		break;
		}

	}

	for(int i = str.length()-1; i >= 0; i--){
		if(str[i] == 'w'){
			num++;
		}else{
			ch = str[i];
			for(int j =i; j >= 0; j--){
				if(str[j] == ch || str[j] == 'w'){

					num++;
				}else{
					break;
				}

			}
		break;
		}
	
	
	}

	if(num > str.length()){
		num = str.length();
		return num;
	}

	return num;
}




int main(){

int n = 0;
string st = "";

ifstream fin("beads.in");
ofstream fout("beads.out");

fin >> n;
fin >> st;

int max = -1;
for(int i = 0; i < st.length(); i++){
	string str = process(st,i);
	int m = count(str);
	if(m > max){
		max = m;
	}
}

fout << max << endl;





return 0;
}

