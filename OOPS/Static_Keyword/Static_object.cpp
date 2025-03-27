#include<bits/stdc++.h>
using namespace std;
class ABC{
    public: 
    ABC(){
        cout<<"Constructor"<<endl;
    }
    ~ABC(){
        cout<<"destructor"<<endl;
    }
};
class ABA{
    public: 
    ABA(){
        cout<<"Constructor"<<endl;
    }
    ~ABA(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    
    // if(true){
    //     ABC obj; //without static object -> constructor -> destructor -> main
    // }
    if(true){
        static ABA obj;   //static object -> constructor -> main -> destructor
    }
    cout<<"Main"<<endl;
    return 0;
}