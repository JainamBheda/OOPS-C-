#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
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
    Teacher T1("Jainam","DSP","EXTC",25000);
    cout<<T1.Name<<endl;
    cout<<T1.dept<<endl;
    // cout<<T1.salary<<endl;
    cout<<T1.subject<<endl;
    return 0;
}