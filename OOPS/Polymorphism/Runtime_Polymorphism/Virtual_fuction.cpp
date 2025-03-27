//virtaul fuction is same as function overriding
#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
        virtual void hello(){  //to be re-implemented in child class 
            cout<<"parent"<<endl;
        }
};
class child : public parent{
    public:
        void hello(){          // reimplemented in child class
            cout<<"child"<<endl;
        }
};
int main(){
    parent p1;
    p1.hello();
    child c1;
    c1.hello();
    return 0;
}
