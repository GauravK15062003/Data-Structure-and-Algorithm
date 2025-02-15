#include<iostream>
using namespace std;
int maze(int sc, int sr, int ec, int er){
    if(sc>ec || sr>er) return 0;
    if(sc==ec && sr==er) return 1;
    int rightways = maze(sc+1,sr,ec,er);
    int downways = maze(sc,sr+1,ec,er);
    int totalways = downways + rightways;
    return totalways;
}
void printPath(int sc, int sr, int ec, int er, string s){
    if(sc>ec || sr>er) return ;
    if(sc==ec && sr==er) {
        cout<<s<<endl;
        return;
    }
    printPath(sc+1,sr,ec,er,s+'R'); //Right
    printPath(sc,sr+1,ec,er,s+'D'); //Left
    return;
}
int maze2(int sc, int sr){
    if(sc<1 || sr<1) return 0;
    if(sc==1 && sr==1) return 1;
    int rightways = maze2(sc-1,sr);
    int downways = maze2(sc,sr-1);
    int totalways = downways + rightways;
    return totalways;
}
int main(){
    // cout<<maze(1,1,3,3)<<endl; // 6
    cout<<maze(1,1,2,3)<<endl; //3
    printPath(1,1,3,3,"");
    // cout<<maze2(2,3)<<endl;
    // cout<<maze2(3,3)<<endl;
}