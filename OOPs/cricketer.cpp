#include<iostream>
#include<String>

using namespace std;

class Cricketer{
    public:
    char name;
    int age ;
    int noOfTestMatches;
    int averageScore;
};
int main(){
    Cricketer virat;
    virat.name='Virat';
    virat.age=30;
    virat.noOfTestMatches=100;
    virat.averageScore=80;

    Cricketer dhoni;
    dhoni.name='Dhoni';
    dhoni.age=37;
    dhoni.noOfTestMatches=19;
    dhoni.averageScore=90;

    for(int i=0;i<2;i++){
        Cricketer *cricketer = new Cricketer;
        cricketer->name : "Rahul";
        cin>>
    }
    Cricketer cricketers[2] = {virat,dhoni};

    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTestMatches<<endl;
        cout<<cricketers[i].averageScore<<endl;
    }
}