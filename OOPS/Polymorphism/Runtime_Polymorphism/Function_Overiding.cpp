#include <bits/stdc++.h>
using namespace std;
class parent{
    public:
        void getinfo(){
            cout<<"parent"<<endl;
        }
};
class child : public parent{
    public:
        void getinfo(){
            cout<<"child"<<endl;
        }
};
int main(){
    parent p1;
    p1.getinfo();
    child c1;
    c1.getinfo();
    return 0;
}
