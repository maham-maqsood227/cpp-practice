#include<iostream>
using namespace std;
class Student { //student is a new data type
public:
    string name;
    int marks;
    int rollnumber;

};

class Car {
public:
    string name;
    int modle;
    int number;

};

int main(){
    Student S1;
    S1.name = "maham";
    S1.marks = 50;
    S1.rollnumber = 7652;

    Student S2;
    S2.name = "sehar";
    S2.marks = 50;
    S2.rollnumber = 7653;

cout<<S1.name<<" "<<S1.marks<<" "<<S1.rollnumber<<endl;
cout<<S2.name<<" "<<S2.marks<<" "<<S2.rollnumber<<endl;

    Car m;
    m.name = "honda";
    m.modle = 2026;
    m.number = 8877;

cout<<m.name<<" "<<m.modle<<" "<<m.number<<endl;
return 0;

}