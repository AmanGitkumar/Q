#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    Student(){
        cout << "non-parameters" << endl;
    }
    Student(string name){
        this->name = name;
        cout << "parametics" << endl;
    }
};

int main(){

    Student st;
    Student s("aman");
    
    return 0;
}