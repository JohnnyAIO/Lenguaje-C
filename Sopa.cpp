#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
char sopa[5][5];
char letra[5];

for(int fil=0; fil <5; fil++){

    for(int col=0; col<5; col++){
    cin >> sopa[fil][col];
    }//end-for
    cout<<endl;
}//end-for

cout<<"digite palabra: ";
cin>>letra;

for(int fil=0; fil <5; fil++){
    for(int col=0; col<5; col++){
        if (letra[0]==sopa[fil][col]){
            cout << letra;
            cout<<"fil: "<<fil<<"col: "<<col<<endl;
        }//end-if
    }//end-for
}//end-for
cout<<" "<<endl;
return 0;
}//end-main
