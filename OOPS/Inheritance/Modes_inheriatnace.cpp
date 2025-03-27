#include <bits/stdc++.h>
using namespace std;
class Person{
    private:
        double salary;   //this can't be inherited as it is in private:
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
class Student : private Person{   
    public:
        int rollno;
        Student(string name, int age, int rollno) : Person(name, age) {   
            this->rollno = rollno;
        }
        void getinfo(){
            cout<<name<<endl;
            cout<<rollno<<endl;
            cout<<age<<endl;
            // cout<<salary<<endl;   //salary was private in parent hence no inherited (error in compilation )
        }
};

int main(){    
    Student s1("Jainam",20,9.8);
    // cout<<s1.age<<endl;  //cannot accese age as parents's public will become student's private when inherit 
    s1.getinfo();
    return 0;
}

// base class - private : Not Inheritated
// base class - public : then 
                        //base class    //derived class
                        //public        //private           -> private 
                        //public        //protected         ->protected
                        //public        //public            ->PUBLIC    
// base class - protected : then 
                        //base class    //derived class
                        //protected        //private           -> private 
                        //protected        //protected         ->protected
                        //protected        //public            ->protected


