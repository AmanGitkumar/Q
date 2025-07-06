#include <iostream>
using namespace std;

// Define a class
// class Car {
// private:
//     string brand;
//     int year;

// public:
//     // Constructor
//     Car(){
//         cout << "hii this side constructor" << endl;
//     }
//     Car(string brand, int y) {
//         this->brand = brand;
//         year = y;
//     }

//     // Member function
//     void displayInfo() {
//         cout << "Brand: " << this->brand << ", Year: " << year << endl;
//     }
// };

class student{
    public:
    string name;
    double* cgpaPtr;

    student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

    }
    // student(student &obj){
    //     this->name = obj.name;
    //     cgpaPtr = new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    // }

    // Destructor
    ~student(){
        cout << "hii i delete everything" << endl;
        delete cgpaPtr;
    }

    void getInfo(){
        cout << "student name: " << name << endl;
        cout << "student cgpa: " << *cgpaPtr << endl;
    }
};

int main() {
    // Create an object of Car
    // Car c1;
    // Car myCar("Toyota", 2020); // call constructor

    // Call member function
    // myCar.displayInfo();

    student st("aman kumar",7.6);
    // student s2(st);

    st.getInfo();
    // *(s2.cgpaPtr) = 8.7;
    // st.getInfo();
    // s2.getInfo();

    return 0;
}
