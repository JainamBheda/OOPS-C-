#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        //Non - parametrized Constructor
         Teacher(){
           cout<<"Hey I am constructor";
        }
        //parametrized Constructor
        Teacher(string n,string s, string d,double sal){
            Name=n;
            subject=s;
            dept=d;
            salary=sal;
        }
        
        string Name;
        string dept;
        string subject;
        
};
int main(){
    // Teacher T2();
    Teacher T1("Jainam","DSP","EXTC",25000);
    Teacher T2(T1); //default copy constructor
    cout<<T2.Name<<endl;
    cout<<T2.dept<<endl;
    // cout<<T1.salary<<endl;
    cout<<T2.subject<<endl;
    return 0;
}