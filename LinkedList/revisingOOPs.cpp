#include<iostream>
using namespace std;
class Student{ //user defined data type
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change1(Student s){
        s.name = "Harsh";
    }
 void change2(Student* s){
    s->name = "Kumar";
}
int main(){
    Student s("Gaurav", 76, 92.6);
    cout<<s.name<<endl;
    // change1(s);//pass by value
    change2(&s);
    cout<<s.name<<endl;
    Student* ptr = &s;
    // cout<<s.name<<endl;
    // (*ptr).name = "Kumar";
    ptr->name = "Kumar";
    // cout<<s.name<<endl;
}