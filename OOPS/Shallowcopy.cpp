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
    S1.getinfo();  // S2 cgpa is changed but s1 cgpa also changed (Problem for Shallow Copy);
    return 0;
}

//so this cons of shallow copy 