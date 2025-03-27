#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        //Non - parametrized Constructor
        Teacher(){
            dept="Electronics and TeleCommunication";
        }
        string Name;
        string dept;
        string subject;
        
};
int main(){
    Teacher T1;
    T1.Name="Jainam Bheda";
    T1.subject="DSP";
    cout<<T1.dept<<endl;
    cout<<T1.Name<<endl;
}