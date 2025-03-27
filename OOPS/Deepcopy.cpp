#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        double *cgpaptr;
        Student(string name,double cgpa){
            this->name=name;
            cgpaptr=new double; //Allocated in heap
            *cgpaptr=cgpa;
        }
        Student(Student &obj){
            this->name=name;
            cgpaptr=new double; //Allocated in heap
            *cgpaptr=*obj.cgpaptr; //deep copy 
        }
        void getinfo(){
            cout<<name<<endl;
            cout<<*cgpaptr<<endl;
        }
};
int main()
{
    Student S1("Jainam",8.9);
    Student S2(S1); //copy constructor
    S1.getinfo();
    *(S2.cgpaptr)=9.2; //dynamicall changed
    S1.getinfo();  // because deep copy (*cgpaptr=*obj.cgpaptr in custom constructor) cons of shallow copy is solved
    return 0;
}

//so this pros of deep copy 