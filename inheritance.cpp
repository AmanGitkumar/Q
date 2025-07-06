#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;

    Person(){
        cout << "person constructor" << endl;
    };
};
class Student : public Person{

    public:
    int rollno;

    Student(){
        cout <<"student constructor" << endl;
    };

    void getInf(){
        cout << "student " << endl;
        cout << "name " << name << endl;
        cout << "age " << age << endl;
        cout << "rollno " << rollno << endl;

    }
};
int main(){
    Student st;
    st.age = 23;
    st.name = "aman";
    st.rollno = 12;
    st.getInf();
}