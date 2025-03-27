#include <bits/stdc++.h>
using namespace std;
class Teacher{      //Encapsulation
    private:
        double salary;
    public:
        string Name;    //data
        string dept;    //data
        string subject;
        void changedept(string s){      //member function 
            dept=s;
        }
        
};
int main(){
    Teacher T1;
    T1.Name="Jainam Bheda";
    T1.subject="DSP";
    T1.dept="Extc";
    cout<<T1.dept<<endl;
    T1.changedept("AIDS");
    cout<<T1.dept<<endl;
    cout<<T1.Name<<endl;
}