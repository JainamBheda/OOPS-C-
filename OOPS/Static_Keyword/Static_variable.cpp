#include <bits/stdc++.h>
using namespace std;
//without static keyword
void fun(){
    int x=0;
    cout<<"x: "<<x<<endl;
    x++;
};
//with static keyword
void func(){
    static int x=0;  //intialized once as it is static
    cout<<"x: "<<x<<endl;
    x++;
}
int main(){
    //without static variable
    fun();
    fun();
    fun();
   // with static variable 
    func();
    func();
    func();
    return 0;
}