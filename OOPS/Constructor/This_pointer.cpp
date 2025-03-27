#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        string Name;
        string dept;
        string subject;
        //Non - parametrized Constructor
         Teacher(){
           cout<<"Hey I am constructor";
        }
        //parametrized Constructor
        Teacher(string Name,string subject, string dept,double salary){ //same name for paramater and properties (for diffrence we use this pointer).
            this->Name=Name;
            this->subject=subject;
            this->dept=dept;
            this->salary=salary;
        }
        //Custom Copy Constructor
        Teacher(Teacher &obj){
            cout<<"Custom copy contructor";
            this->Name=obj.Name;
            this->subject=obj.subject;
            this->dept=obj.dept;
            this->salary=obj.salary;
        }
};
int main( ){
    // Teacher T2();
    Teacher T1("Jainam","DSP","EXTC",25000);
    Teacher T2(T1); //custom copy constructor;
    cout<<T2.Name<<endl;
    cout<<T2.dept<<endl;
    // cout<<T1.salary<<endl;
    cout<<T2.subject<<endl;
    return 0;
}