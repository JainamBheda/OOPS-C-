//Jainam Bheda
#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        double* cgpaptr;
        Student(string name, double cgpa){
            this->name=name;
            cgpaptr=new double;  //Memory Allocation 
            *cgpaptr=cgpa;
        }
        ~Student(){             //Memory Deallocation 
            cout<<"Hi I am destructor, I delete Everything"<<endl;
            delete cgpaptr; //if this line was not written , I may lead to memory leak
        }
        void getinfo(){
            cout<<name<<endl;
            cout<<*cgpaptr<<endl;
        }
};
int main(){
    Student s1("Jainam",9.2);
    s1.getinfo();
    //destructer Automatically call hoyega 
    return 0;
}
//Jainam Bheda 