#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
class Student : public Person{   //Inheritance of class Person(parent) to class Student(child)
    public:
        int rollno;
        Student(string name, int age, int rollno) : Person(name, age) {   // Inheritance type ka constructor
            this->rollno = rollno;
        }
        void getinfo(){
            cout<<name<<endl;
            cout<<rollno<<endl;
            cout<<age<<endl;
        }
};
class base{
    public:
        base(){
            cout<<"I am base constructor"<<endl;
        }
};
class derived : public base{
    public:
        derived(){
            cout<<"I am derived class wala constructor"<<endl;
        }
};
int main(){    
    Student s1("Jainam",20,9.8);
    derived d1;   // whenerver derived obj is created , first base constructor is called , then derived constructor is called 
    s1.getinfo();
    return 0;
}

// whenver obj created via inheritance then first base constructor is called then dervied constructor is called 