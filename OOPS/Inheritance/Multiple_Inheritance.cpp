#include <bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int rollno;
};
class teacher{
    public:
        string subject;
        double salary;
};
class TS : public student,public teacher{ //multiple inheritance 

};
int main(){
    
    TS t;
    t.name="Jainam";
    t.subject="Bio";
    cout<<t.name<<endl;
    cout<<t.subject<<endl;
    return 0;
}

// parent1->child AND parent2->child