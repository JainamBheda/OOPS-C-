//constuctor overloading polymorphism ka example hai 
#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        Student(){
            cout<<"Non-parametized constructor"<<endl;
        }
        Student(string name){
            this->name=name;
            cout<<"parametized Constructor"<<endl;
        }
};
int main(){
    //below object behave in diff ways depending on context  (iska matalb polymorphism)
    Student s1;         // non parametized constructor callled  
    Student S2("Jainam Bheda");  // parametized constructor called
    return 0;
}

//Polymorphism is abity of object to take on diff forms or behave in diffrent ways depending on context which they are used 